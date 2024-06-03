from django.shortcuts import render
from shoppage.models import Item, Maker, Comment, Category, Tag

# Create your views here.
def home(request):
    recent_items = Item.objects.order_by('-pk')[:3]
    return render(request, 'singlepage/home.html', {
        'recent_item' :recent_items
    })

def my_page(request):
    my_comment = Comment.objects.filter(author=request.user)
    return render(request, 'singlepage/my_page.html', {
        'my_comment' : my_comment
    })

def intro(request):
    makers = Maker.objects.all()
    categories = Category.objects.all()
    tags = Tag.objects.all()
    return render(request, 'singlepage/intro.html', {
        'makers': makers,
        'categories': categories,
        'tags': tags
    })