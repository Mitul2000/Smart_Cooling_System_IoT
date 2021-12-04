
/* 
DHT Weather server with display integrated for NodeMCU esp8266 and 1602A LCD

Please connect 1602A using I2C backpack.
If you feel display is not showing anything, please take a screwdriver and update contrast 
using I2C potentiometer in back of LCD

LCD config
  SDA pin - D2
  SCL pin - D1
  VCC Pin - 5v
  
  
Sensor Config
  Sensor Data pin - RX
  Sensor VCC - 3.3 volt pin

  If you change above pin please update config below. 
*/
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <DHT.h> //This library you can add via Include Library > Manage Library >
#include <ESP8266mDNS.h>
#include <Wire.h>  // This library is already built in to the Arduino IDE
//#include <LiquidCrystal_I2C.h> //This library you can add via Include Library > Manage Library > 
#include <Stepper.h>
//LiquidCrystal_I2C lcd(0x27, 16, 2);


#define DHTPIN D3         //define as DHTPIN the Pin 3 used to connect the Sensor
#define DHTTYPE DHT11    //define the sensor used(DHT11)
DHT dht(DHTPIN, DHTTYPE);//create an instance of DHT

const char* mqtt_server = "broker.hivemq.com";
WiFiClient espClient;
PubSubClient client(espClient);
long lastMsg = 0;
char msg[50];

int value = 0;
int dataspeed = 5000;


const int stepsPerRevolution = 500;
Stepper myStepper(stepsPerRevolution, D1, D2, D5, D6);

const char* host = "iot-web";
const char* ssid     = "ZEEL5";
const char* password = "maharship";

ESP8266WebServer server(80);
float humidity, temp_f;  // Values read from sensor
String webString="";   
unsigned long previousMillis = 0;        // will store last temp was read
const long interval = 3000;              // interval at which to read sensor
 
void handle_root() {
  server.send(200, "text/plain", "Welcome to weather server, open /temp, /humidity or /api");
  delay(100);
}
 
void setup(void)
{
//  lcd.init();   // initializing the LCD
//  lcd.backlight();
  Serial.begin(115200);
  dht.begin(); // initialize temperature sensor
  // Connect to WiFi network
  WiFi.begin(ssid, password);
  Serial.print("\n\r \n\rWorking to connect");
  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("DHT Weather Reading Server");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  MDNS.begin(host);
  MDNS.addService("http", "tcp", 80);
  Serial.printf("Ready! Open http://%s.local in your browser\n", host);
  server.on("/", handle_root);
  
  server.on("/temp", [](){  
    gettemperature();       // read sensor
    webString="Temperature: "+String((int)temp_f)+" Celsius";
    server.send(200, "text/plain", webString);
  });

  server.on("/humidity", [](){ 
    gettemperature();           // read sensor
    webString="Humidity: "+String((int)humidity)+"%";
    server.send(200, "text/plain", webString); 
  });

 //Rest API for sensor data
  server.on("/api", [](){  
    gettemperature();           // read sensor
    String json="{\"temperature\":"+String((int)temp_f)+",\"humidity\":"+String((int)humidity)+"}";
    Serial.println(json);
    server.send(200, "application/json", json);
  });
  
  server.begin();
  Serial.println("HTTP server started");
  client.setServer(mqtt_server, 1883);
  client.setCallback(callback);
  myStepper.setSpeed(80);

   myStepper.step(stepsPerRevolution);
   Serial.print("  clockwise" );    
   myStepper.step(stepsPerRevolution);
}

void callback(char* topic, byte* payload, unsigned int length) {
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++) {
    Serial.print((char)payload[i]);
  }
  if ((char)payload[0] == '1'){
    Serial.println("rotate request");
    myStepper.step(stepsPerRevolution);
//    HTTPClient http;
//    http.begin(espClient, "http://143.244.144.146:8000/api/temp");
//    http.addHeader("Content-Type", "application/json");
//    String mess="{\"name\":\"sldkfjssa\",\"temp\":\"29C\",\"status\":\"ON\"}" ;
//    Serial.println(mess);
//    int httpCode = http.POST(mess);
//    String payload = http.getString(); 
//    Serial.println(httpCode);
//    Serial.println(payload);
  }
  if ((char)payload[0] == '2'){
    Serial.println("the user typed a 2");

  }
  

  // Switch on the LED if an 1 was received as first character
  if ((char)payload[0] == '1') {
    digitalWrite(BUILTIN_LED, LOW);   // Turn the LED on (Note that LOW is the voltage level
    // but actually the LED is on; this is because
    // it is acive low on the ESP-01)
  } else {
    digitalWrite(BUILTIN_LED, HIGH);  // Turn the LED off by making the voltage HIGH
  }

}

void reconnect() {
  // Loop until we're reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    // Create a random client ID
    String clientId = "ESP8266Client-";
    clientId += String(random(0xffff), HEX);
    // Attempt to connect
    if (client.connect(clientId.c_str())) {
      Serial.println("connected");
      // Once connected, publish an announcement...
      client.publish("outTopic", "hello world");
      // ... and resubscribe
      client.subscribe("EuANiaPJsf/MobileApp");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 seconds");
      // Wait 5 seconds before retrying
      delay(5000);
    }
  }
}


 
void loop(void)
{
 if (!client.connected()) {
    reconnect();
  }
  client.loop();

  server.handleClient();
  if(gettemperature()){
    sendingmessage();
  }

  delay(15000);
} 

void sendingmessage(){
  snprintf (msg, 75, "temp: %.1f humidity: %.1f", temp_f, humidity);
  Serial.println(msg);
  client.publish("AW234lk23S/update", msg);
  Serial.println("message sent to phone");
  String stemp = String(temp_f, 2);
    HTTPClient http;
    http.begin(espClient, "http://143.244.144.146:8000/api/temp");
    http.addHeader("Content-Type", "application/json");
    String mess1 = "{\"name\":\"sldkfjssa\",\"temp\":\"";
    mess1.concat(stemp);
    String mess2 = "\",\"status\":\"ON\"}";
    mess1.concat(mess2);
    Serial.println(mess1);
    int httpCode = http.POST(mess1);
    String payload = http.getString(); 
    Serial.println(httpCode);
    Serial.println(payload);
  
}

bool gettemperature() {
  unsigned long currentMillis = millis();
 if(currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;   
    humidity = dht.readHumidity();          // Read humidity (percent)
    temp_f = dht.readTemperature(false);     // Read temperature as Celsius
    if (isnan(humidity) || isnan(temp_f)) {
      humidity=0;
      temp_f=0;
      Serial.println("Failed to read from DHT sensor!");
      return false;
    }else{
      Serial.println("successfully read the temp sensor");
      Serial.println(temp_f);
      Serial.println(humidity);
      String stemp = String(temp_f, 2);

      return true;
    }
  }
}
