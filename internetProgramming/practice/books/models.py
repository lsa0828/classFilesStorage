from django.db import models

# Create your models here.
class Category(models.Model):
    name = models.CharField(max_length=50, unique=True)
    slug = models.SlugField(max_length=200, unique=True, allow_unicode=True)

    def __str__(self):
        return self.name

    def get_absolute_url(self):
        return f'/books/category/{self.slug}'

    class Meta:
        verbose_name_plural = 'Categories'

class Book(models.Model):
    title = models.CharField(max_length=100)
    publisher = models.CharField(max_length=50)
    author = models.CharField(max_length=20)
    pub_date = models.DateField()

    category = models.ForeignKey(Category, null=True, blank=True, on_delete=models.SET_NULL)

    def __str__(self):
        return f'[{self.pk}]{self.title}'

    def get_absolute_url(self):
        return f'/books/{self.pk}/'
