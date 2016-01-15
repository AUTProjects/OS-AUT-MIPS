
#include "user.h"
#include "fcntl.h"

int main(void){

    int* p = (int*)malloc(sizeof(int));
    int fd = open("process",O_RDONLY);
    allocprocess((int)p);
    loadprocess((int)p,fd);
    start(*p,getpid());

  //  start(0,0);
    printf(1,"ok\n");

    wait();

    exit();

}
