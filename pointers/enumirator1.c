#include<stdio.h>
enum boolean{
    true,false
};
enum boolean isEven(int n){
    if(n%2 == 0)
    return(false);
    else
    return(true);
}
int main(){
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    enum boolean result = isEven(n);
    if(result == true)
    printf("not an even number\n");
    else
    printf("even number \n");

    return 0;
}