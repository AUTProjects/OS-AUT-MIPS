
#include "user.h"
#include "fcntl.h"

int main(void){

    int* pr = (int*)malloc(sizeof(int));

    int fd_process = open("process",O_CREATE | O_WRONLY);
    int fd_pages = open("pages",O_CREATE | O_WRONLY);
    int fd_context = open("context",O_CREATE | O_WRONLY);
    int fd_flags = open("flags",O_CREATE | O_WRONLY);
    int fd_tf = open("tf",O_CREATE | O_WRONLY);

    int i = 0;
//    int pid = fork();
//
//    if(pid == 0){
        for(;i<100;i++){
             printf(1,"child : %d\n",i);
//        }
//    }else{
//      //  sleep(1);
            if(i ==20) {
//                printf(1, "process saved\n");
               // find(getpid(), (int) pr);
                saveprocess(*pr, fd_process, fd_pages, fd_context, fd_flags, fd_tf);
            }
//        wait();
        //  allocprocess((int)p);
       // loadprocess((int)p,fd);
      //  start(*p,getpid());
    }


    exit();

}
