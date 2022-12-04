 #include<stdio.h>
 void input(int *p){
    int i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",p+i);
    }
 }
    void display(int *p){
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d",*p+i);
    }
    
 }
 int main(){
    int a[5],*p;
    void input(int *p);
    void display(int *p);
    input(a);
    display(a);
    return 0;


 }