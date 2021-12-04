from rest_framework import serializers
from api.models import Tempreature

class TempreatureSerializers(serializers.ModelSerializer):
    class Meta:
        model = Tempreature
        fields = ['name','temp','status']