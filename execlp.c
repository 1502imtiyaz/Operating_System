#include<stdio.h>
#include<unistd.h>
int main(){
    execlp("/bin/ls","ls",NULL);
    printf("The statement won't print");
}