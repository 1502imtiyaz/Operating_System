#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t q,a;
    q=fork();
    a=getpid();
    if(q<0)
    printf("Child not created");
    else if(q==0){
    for(int i=0;i<4;i++){
    sleep(2);
    printf("Welcome my friend mr.dolaund trump\n");
    }
    printf("Child has been created and its p_id is:%d,\n",a);
    printf("Parent process id of this child is:%d\n",getppid());
    }
    else
    printf("Parent process id is:%d\n",a);
    return 0;
}