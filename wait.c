#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/wait.h>
int main(){
    pid_t q,a;
    q=fork();
    a=getpid();
    if(q<0)
    printf("Child not created");
    else if(q==0){
    printf("Child has been created and its p_id is:%d,\n",a);
    printf("Parent process id of this child is:%d\n",getppid());
    }
    else{
    wait(NULL);
    printf("Parent process id is:%d\n",a);
    }
    return 0;
}