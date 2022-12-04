#include<stdio.h>
int main(){
    char s[] = "mohit";
    FILE *fp;
    fp = fopen("f1.txt","w");
    if(fp == NULL){
        printf("file not opend");
        exit(1);
    }
    // gets(s);
    // for(int i = 0; i<'/';i++){
    //     scanf("%c",&s[i]);
    // }
    for(int i = 0;i < strlen(s);i++){
        fputc(s[i],fp);
    }
        fclose(fp);

    return 0;
}