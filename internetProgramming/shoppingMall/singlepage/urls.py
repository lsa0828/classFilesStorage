from django.urls import path
from . import views

urlpatterns = [
    path('', views.home),
    path('my_page/', views.my_page),
    path('intro/', views.intro),
]