#include<stdio.h>
#include<string.h>


struct book {
    char Title[30];
    char Author[30];
    int publicationyear;  
    char ISBN[13];
    float price;
} book;

int main() {
    strcpy(book.Title, "Introduction to C Programming");
    strcpy(book.Author, "John Smith");
    book.publicationyear = 2020;  
    strcpy(book.ISBN, "978013103627");
    book.price = 49.99;  

    printf("Title: %s \n", book.Title);
    printf("Author: %s \n", book.Author);
    printf("Publication Year: %d n", book.publicationyear);  
    printf("ISBN: %s \n", book.ISBN);
    printf("Price: $%.2f \n", book.price);  
    
return 0;
}
