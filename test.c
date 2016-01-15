
#include "user.h"
#include "fcntl.h"

int main(void){

    int* pr = (int*)malloc(sizeof(int));
    int fd = open("process",O_CREATE | O_RDWR);
    int i = 0;
 //   int* p = (int*)malloc(sizeof(int));
    int pid = fork();

    if(pid == 0){
        for(;i<1000;i++){
            printf(1,"child : %d\n",i);
        }
    }else{
        sleep(1);
        find(getpid(),(int)pr);
        saveprocess(*pr,fd);
      //  allocprocess((int)p);
       // loadprocess((int)p,fd);
      //  start(*p,getpid());
    }

    wait();
    exit();

}
