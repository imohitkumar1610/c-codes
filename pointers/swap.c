#include<stdio.h>


// wrong approach 
int main(){
    void swap(int x,int y);
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d%d\n",x,y);

}

//correct approach 
int main(){
    void change(int *x,int *y);
    int a,b;
    scanf("%d %d",&a,&b);
    change(&a,&b);
    printf("%d%d\n",a,b);
    return 0;
}
void change(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d%d\n",*x,*y);

}