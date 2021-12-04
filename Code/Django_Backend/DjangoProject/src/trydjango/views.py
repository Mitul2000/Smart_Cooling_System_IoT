from django.shortcuts import render
from rest_framework.views import APIView
from rest_framework.response import Response
from rest_framework.permissions import IsAuthenticated

from temperature.serializers import DeviceSerializers
from temperature.models import Device


class TestView(APIView):

    permission_classes = (IsAuthenticated,)

    def get(self, request, *args, **kwargs):
        qs = Device.objects.all()
        serializer = DeviceSerializers(qs, many=True)
        return Response(serializer.data)

    def post(self, request, *args, **kwargs):
        serializer = DeviceSerializers(data=request.data)
        if serializer.is_valid():
            serializer.save()
            return Response(serializer.data)
        return Response(serializer.errors)


