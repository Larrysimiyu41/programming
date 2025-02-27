

#include <stdio.h>
#include <string.h>

// Define the structure
struct book {
    char title[30];
    char author[30];
    int publicationYear;
    char ISBN[13];
    float price;
};

int main() {
    struct book myBook;

    strcpy(myBook.title, "Introduction to C Programming");
    strcpy(myBook.author, "John Smith");
    myBook.publicationYear = 2022;
    strcpy(myBook.ISBN, "9780131103627");
    myBook.price = 49.99;

    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publicationYear);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}


