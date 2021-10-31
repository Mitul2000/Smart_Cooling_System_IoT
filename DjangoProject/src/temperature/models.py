from django.db import models

# Create your models here.
class Device(models.Model):
    name = models.CharField(max_length=100)
    temp = models.CharField(max_length=100)
    status = models.CharField(max_length=100)
    description = models.TextField()
    date_log = models.DateTimeField(auto_now=True)

    def __str__(self):
        return self.name