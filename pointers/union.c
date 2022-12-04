#include<stdio.h>
union item
{
    int x;
    char y;
    float z;
};

int main(){
    union item i1;
    i1.x = 5;
    printf("%d",i1.x);
    i1.y = 'm';
    printf("\n%c\n",i1.y);
    return 0;
}