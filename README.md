
# Project Title: Smart Cooling System
Navigation: Table <br />
Proposal Folder: [Project Proposal Link](https://github.com/Mitul2000/Smart_Cooling_System_IoT/blob/main/IoTProject%20Proposal.pdf)<br />
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


