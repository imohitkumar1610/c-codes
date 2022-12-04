//enumirators are used to create a user defined data type.
#include<stdio.h>
enum month{
    jan,feb,march,april,may,june,july,sugust,sep,oct,nov,dec
};
int main(){
    enum month m1;
    m1 = jan;
    printf("%c",m1);
    return 0;
} 