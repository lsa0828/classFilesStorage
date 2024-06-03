from django.db import models
from django.contrib.auth.models import User
from markdownx.models import MarkdownxField
from markdownx.utils import markdown
import os

# Create your models here.
class Tag(models.Model):
    name = models.CharField(max_length=50)
    slug = models.SlugField(max_length=200, unique=True, allow_unicode=True)

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        return f'/shop/tag/{self.slug}/'

class Category(models.Model):
    name = models.CharField(max_length=50, unique=True)
    slug = models.SlugField(max_length=200, unique=True, allow_unicode=True)

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        return f'/shop/category/{self.slug}'

    class Meta:
        verbose_name_plural = 'Categories'

class Maker(models.Model):
    name = models.CharField(max_length=30)
    address = models.CharField(max_length=50)
    phone = models.CharField(max_length=20)
    logo = models.ImageField(upload_to='shoppage/logos/%Y/%m/%d/', blank=True)

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        return f'/shop/maker/{self.name}'

class Item(models.Model):
    name = models.CharField(max_length=50)
    image = models.ImageField(upload_to='shoppage/images/%Y/%m/%d/', blank=True)
    content = MarkdownxField()
    price = models.IntegerField(default=0)
    discount = models.IntegerField(default=0)
    delivery_days = models.IntegerField(default=0)

    maker = models.ForeignKey(Maker, null=True, on_delete=models.CASCADE)
    category = models.ForeignKey(Category, null=True, blank=True, on_delete=models.SET_NULL)

    tags = models.ManyToManyField(Tag, blank=True)

    author = models.ForeignKey(User, null=True, on_delete=models.SET_NULL)

    def get_discount_price(self):
        return round(self.price * (1 - self.discount / 100))

    def __str__(self):
        if(self.discount > 0) :
            discount_price = self.get_discount_price()
            return f'[{self.pk}]{self.name} - {discount_price}({self.discount}% off) '
        else :
            return f'[{self.pk}]{self.name} - {self.price} '

    def get_absolute_url(self):
        return f'/shop/{self.pk}/'

    def get_content_markdown(self):
        return markdown(self.content)

    def get_avatar_url(self):
        if self.author.socialaccount_set.exists():
            return self.author.socialaccount_set.first().get_avatar_url()
        else:
            return 'https://dummyimage.com/50x50/ced4da/6c757d.jpg'

class Comment(models.Model):
    item = models.ForeignKey(Item, on_delete=models.CASCADE)
    author = models.ForeignKey(User, on_delete=models.CASCADE)
    content = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True)
    modified_at = models.DateTimeField(auto_now=True)

    def __str__(self):
        return f'{self.author} : {self.content}'

    def get_absolute_url(self):
        return f'{self.item.get_absolute_url()}#comment-{self.pk}'

    def get_avatar_url(self):
        if self.author.socialaccount_set.exists():
            return self.author.socialaccount_set.first().get_avatar_url()
        else:
            return 'https://dummyimage.com/50x50/ced4da/6c757d.jpg'