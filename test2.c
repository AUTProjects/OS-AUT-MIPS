
#include "user.h"
#include "fcntl.h"

int main(void){

    int* p = (int*)malloc(sizeof(int));
    int fd = open("process",O_RDONLY);
    int fd2 = open("pages",O_RDONLY);
  //  int pid;
    allocprocess((int)p);
    loadprocess((int)p,fd,fd2);
  //  pid = fork();
   // if(pid == 0)
        start(*p,getpid());
   // else wait();
    printf(1,"ok\n");



    exit();

}
