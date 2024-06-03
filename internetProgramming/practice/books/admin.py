from django.contrib import admin
from .models import Book, Category

# Register your models here.
admin.site.register(Book)

class CategoryAdmin(admin.ModelAdmin):
    prepopulated_fields = {'slug' : ('name',)}

admin.site.register(Category, CategoryAdmin)

#<p> <img src="" height="">
#style="background-color:  ; font-size: 150%; text-align: center"
#<script type="text/javascript">
#    function f(){
#    let a= document.getElementById('').value
#    alert(new Date())
#    }
#</script>
#onkeyup="f()" onclick="f()"
#<label for="inputA">a</label>
#<input id="" value=1 onkeyup="">

#<img src="" class="img-fluid w-100"> 허용된 최대 크기
#row my-3 t b l r x y
#col-lg-6 col-md-8 col-sm
#ml-auto

#venv설치
#pip install django
#django-admin startproject midPrj .
#python manage.py migrate
#python manage.py runserver

#python manage.py createsuperuser
#pip install pillow
#pip install beautifulsoup4

#python manage.py startapp blog

#post_set.all()  post_set.count()