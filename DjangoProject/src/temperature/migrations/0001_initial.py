# Generated by Django 3.2.8 on 2021-10-31 17:14

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Device',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=100)),
                ('temp', models.CharField(max_length=100)),
                ('status', models.CharField(max_length=100)),
                ('description', models.TextField()),
                ('date_log', models.DateTimeField(auto_now=True)),
            ],
        ),
    ]