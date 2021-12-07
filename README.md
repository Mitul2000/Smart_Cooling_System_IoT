
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
Screen Dump

App: [App](https://github.com/Mitul2000/Smart_Cooling_System_IoT/tree/main/DjangoProject/src)<br />
Device Model: [Device Model](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/temperature/models.py)<br />
User Authentication: [Authentication](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/trydjango/settings.py)<br />
Post/Get Handler: [Post/Get API calls](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/trydjango/views.py)<br />
Serializer: [Serializer](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/temperature/serializers.py)<br />
URL Handler: [url](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/trydjango/urls.py)

-----------UseCase Mapping-------------<br />
---Usecase (UC)----|----Table----------<br />
Application UC------>[App](https://github.com/Mitul2000/Smart_Cooling_System_IoT/tree/main/DjangoProject/src)<br />
Management  UC---->[Device Model](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/temperature/models.py)<br />
Communication UC->[CRUD](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/trydjango/views.py)<br />
Secuirty UC--------->[User Auth](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/trydjango/settings.py)<br />
Service UC---------->[Middleware](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/DjangoProject/src/temperature/serializers.py)<br />

# Team Members
Group 3: Mitul Patel, Sarthak Sharma, Adam Wong Chew Onn, Matthew English


# Short project description

Our IoT project will be to create a smart Cooling system. The idea is to design and
create a smart fan which will sense the temperature at every certain interval to assess if the fan
needs to be turned on or not. The Fan is connected to a DC motor and will be connected to the
NODEMCU microcontroller. The device will have a display and connect to other devices using pub/sub
model. We will also use REST API in django to create models and retrieve infomration on web app. 


