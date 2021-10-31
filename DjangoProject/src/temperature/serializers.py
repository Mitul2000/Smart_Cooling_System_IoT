from rest_framework import fields, serializers
from .models import Device

class DeviceSerializers(serializers.ModelSerializer):
    class Meta:
        model = Device
        fields = (
            'name', 'temp'
        )