
#include "user.h"
#include "fcntl.h"

int main(void){

    int* pr = (int*)malloc(sizeof(int));

    int fd_process = open("process",O_CREATE | O_RDWR);
    int fd_pages = open("pages",O_CREATE | O_RDWR);
    int fd_cwd = open("cwd",O_CREATE | O_RDWR);
    int fd_flags = open("flags",O_CREATE | O_RDWR);
    int fd_tf = open("tf",O_CREATE | O_RDWR);

    int i = 0;
    int pid = fork();

    if(pid == 0){
        for(;i<100;i++){
           // printf(1,"child : %d\n",i);
        }
    }else{
      //  sleep(1);
        find(getpid(),(int)pr);
        saveprocess(*pr,fd_process,fd_pages,fd_cwd,fd_flags,fd_tf);
        printf(1,"process saved\n");
        //  allocprocess((int)p);
       // loadprocess((int)p,fd);
      //  start(*p,getpid());
    }

    wait();
    exit();

}
