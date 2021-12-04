from django.shortcuts import render
from rest_framework import generics
from api.models import Tempreature
from api.serializers import TempreatureSerializers
# Create your views here.


class TempList(generics.ListCreateAPIView):
    queryset = Tempreature.objects.all()
    serializer_class = TempreatureSerializers
    
class TempDetails(generics.RetrieveUpdateDestroyAPIView):
    queryset = Tempreature
    serializer_class = TempreatureSerializers