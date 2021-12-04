from django.db import models

# Create your models here.

class Device(models.Model):
    device_id = models.CharField(max_length=200)
    device_name = models.CharField(max_length=200)
    device_description = models.CharField(max_length=200)
    
    def __str__(self):
        return self.device_id + " : " + self.device_name
    