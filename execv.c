#include<stdio.h>
#include<unistd.h>
int main(){
    char *temp[3];
    temp[0]="ls";
    temp[1]="-l";
    temp[2]=NULL;
    execv("/bin/ls",temp);
    printf("The statement won't print");
}