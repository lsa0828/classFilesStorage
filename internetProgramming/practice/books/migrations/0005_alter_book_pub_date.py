# Generated by Django 4.1.2 on 2022-10-28 17:11

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('books', '0004_alter_book_pub_date'),
    ]

    operations = [
        migrations.AlterField(
            model_name='book',
            name='pub_date',
            field=models.DateField(),
        ),
    ]
