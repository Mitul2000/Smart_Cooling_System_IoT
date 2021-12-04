from django.shortcuts import render,redirect
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.decorators import login_required

from .forms import CreateUserForm, DeviceForm
# Create your views here.

def indexView(request):
    return render(request,'index.html')
    
@login_required
def dashboardView(request):
    form = DeviceForm()
    
    if request.method == 'POST':
        print(request.POST)
        form = DeviceForm(request.POST)
        if form.is_valid():
            form.save()
    context = {'form':form}
    return render(request, 'dashboard.html',context)

def registerView(request):
    if request.method == "POST":
        form = CreateUserForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect('login_url')
    else:
        form = CreateUserForm()
    return render(request, 'registration/register.html',{'form':form})
    