from django.shortcuts import render
from .models import Book, Category
from django.views.generic import ListView, DetailView

# Create your views here.
class BookList(ListView):
    model = Book
    ordering = 'pub_date'

    def get_context_data(self, *, object_list=None, **kwargs):
        context = super(BookList,self).get_context_data()
        context['categories'] = Category.objects.all()
        context['no_category_post_count'] = Book.objects.filter(category=None).count
        return context

class BookDetail(DetailView):
    model = Book

    def get_context_data(self, **kwargs):
        context = super(BookDetail,self).get_context_data()
        context['categories'] = Category.objects.all()
        context['no_category_post_count'] = Book.objects.filter(category=None).count
        return context

def category_page(request, slug):
    if slug == 'no_category':
        category = '미분류'
        book_list = Book.objects.filter(category=None)
    else:
        category = Category.objects.get(slug=slug)
        book_list = Book.objects.filter(category=category)
    return render(request, 'books/book_list.html', {
        'category': category,
        'book_list': book_list,
        'categories': Category.objects.all(),
        'no_category_post_count': Book.objects.filter(category=None).count
    })