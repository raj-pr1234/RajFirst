#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book
{
    int bookid;
    float price;
    char ch[100];
};
void main()
{
    struct book s;
    s.bookid=100;
    s.price=250.5;
    gets(s.ch);
    printf("\n 1:Book-id= %d",s.bookid);
    printf("\n 2: Book-price=%.2f",s.price);
    printf("\n 3: Book-name=%s",s.ch);
    getch();
}
