#include<stdio.h>
struct book{
    int bookid;
    char bookName[20];
    float price;
};
struct book input(){
    struct book b;
    printf("Enter the bookid , name and book price.\n");
    scanf("%d",&b.bookid);
    gets(b.bookName);
    scanf("%f",&b.price);
    return(b);
}
void display(struct book b){
    printf("\n%d\n%f",b.bookid,b.price);
    puts(b.bookName);
    printf("\n%f",b.price);
}

void main(){
    struct book b1;
    b1 = input();
    display(b1);
}