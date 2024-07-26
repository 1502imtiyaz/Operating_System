#include<stdio.h>
void main(){
    int n;
    char ch;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Enter any character:");
    fflush(stdin);
    scanf("%c",&ch);
    printf("Given number is %d",n);
    printf("given character is:%c",ch);
}