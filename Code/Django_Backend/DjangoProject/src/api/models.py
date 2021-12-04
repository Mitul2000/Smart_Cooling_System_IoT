from django.db import models

# Create your models here.
class Tempreature(models.Model):
    name = models.CharField(max_length=100)
    temp = models.CharField(max_length=100)
    status = models.CharField(max_length=100)
    description = models.TextField()
    
    def __str__(self):
        return self.name  + " " + self.temp