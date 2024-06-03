from django.contrib import admin
from markdownx.admin import MarkdownxModelAdmin
from .models import Item, Maker, Category, Tag, Comment

# Register your models here.
admin.site.register(Item, MarkdownxModelAdmin)

admin.site.register(Maker)

class CategoryAdmin(admin.ModelAdmin):
    prepopulated_fields = {'slug' : ('name',)}

admin.site.register(Category, CategoryAdmin)

class TagAdmin(admin.ModelAdmin):
    prepopulated_fields = {'slug': ('name',)}

admin.site.register(Tag, TagAdmin)

admin.site.register(Comment)