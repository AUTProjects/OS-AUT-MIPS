
#include "user.h"
#include "fcntl.h"

int main(void){

    int p ;
    int p2;

    int fd_process = open("process", O_RDWR);
    int fd_pages = open("pages",  O_RDWR);
    int fd_cwd = open("cwd",  O_RDWR);
    int fd_flags = open("flags",  O_RDWR);
    int fd_tf = open("tf", O_RDWR);

    p = allocprocess();
    printf(1,"ok\n");
    p2 = loadprocess(p,fd_process,fd_pages,fd_cwd,fd_flags,fd_tf);

    start(p2,p2);



    exit();

}
