
# Project Title: Smart Cooling System
Navigation: Table <br />
Architecture Design <br />
AD: [Digital Ocean Architecture](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Architecture%20Design/Digital%20Ocean%20Architecture.pdf)<br />
AD: [IoT Product Architecture](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Architecture%20Design/IoT%20Product%20Architecture.pdf)<br />
AD: [Mobile Architecture](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Architecture%20Design/Mobile%20Design%20and%20Architecture.pdf)<br />
AD: [System Deployment Architecture](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Architecture%20Design/System%20Deployment%20Architecture.pdf)<br />
AD: [Midterm Progress Architecture](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Midterm_Progress/Assignment%202.pdf) <br />
<br />
Design Decision <br />
DD: [Architecture Design Decision](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Design%20Decision/Architecture%20Design%20Decision.pdf) <br />
DD: [Deployment Design Decision](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Design%20Decision/Deployment%20Design%20Decision.pdf)  <br />
DD: [Microcontroller Design Decision](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Design%20Decision/IoT%20Microcontroller%20Design%20Decision.pdf) <br />
<br />
Code <br />
Arduino: [Smart Fan Code](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Code/Arduino_Code/prototype.ino) <br />
Mobile App: [Mobile App Code](https://github.com/Mitul2000/Smart_Cooling_System_IoT/tree/main/Code/SmartCooling_MobileApp/Smart_Cooling) <br />
Django: [Digtial Ocean Backend Code](https://github.com/Mitul2000/Smart_Cooling_System_IoT/tree/main/Code/Django_Backend/DjangoProject) <br />
<br />
Acceptance Test <br />
[UC Acceptance Test](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Acceptance%20Test/Acceptance%20Testing.pdf) <br />
<br />
Screen Dump <br />
[Backend SS](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Screen%20Dump/Screen%20Dump%20Backend%20.pdf)<br />
Video Demo 1 [Django Website on Digital Ocean for IoT user client demo](https://www.youtube.com/watch?v=u46W_t83d8A)<br />
Demo 1 shows how users can navigate the Django Backend on Digital Ocean.<br />
- Shows user login <br />
- Shows user registration <br />
- Shows dashboard<br />
- Shows Adding Devices<br />
Shows Admin Models for Devices, Users and Temperature <br />
<br />
Video Demo 2 [IoT Communication Between Smart Fan, Django Backend, and Phone App](https://www.youtube.com/watch?v=XeilLnb-hZo)<br />
Demo 2 shows the communication between NodeMCU, Django backend on Digital Ocean and the Phone app.<br />
- Shows Smart Fan sending messages to the Django backend REST using POST<br />
- Shows the phone app receiving the temperature and humidity values<br />
- Shows the Django Admin page receiving the messages and storing them.<br />
[Mobile App Screen Dump](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Screen%20Dump/Mobile%20App%20Screen%20Dump.pdf)<br />
Video Demo 3 [Smart Fan Manual Control from the Phone App](https://www.youtube.com/watch?v=Niaj5oV3jdU)<br />
Video demo 3 shows how users are able to manually control the Smart Fan using the phone app <br />
- When the user turns the fan on, it will turn on the Smart Fan <br />
Video Demo 4 [Temperature Induced Actuation](https://www.youtube.com/watch?v=GqRE4CxRod4)<br />
Video Demo 2 shows how when the temperature reaches a certain value, it will automatically turn the Smart Fan on. <br />
[Smart Fan Screen Dump](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/Screen%20Dump/Smart%20Fan%20screen%20dump.pdf) <br />


# Team Members
Group 3: Mitul Patel, Sarthak Sharma, Adam Wong Chew Onn, Matthew English


# Short project description

Our IoT project will be to create a smart Cooling system. The idea is to design and
create a smart fan which will sense the temperature at every certain interval to assess if the fan
needs to be turned on or not. The Fan is connected to a DC motor and will be connected to the
NODEMCU microcontroller. The device will have a display and connect to other devices using pub/sub
model. We will also use REST API in django to create models and retrieve infomration on web app. 


