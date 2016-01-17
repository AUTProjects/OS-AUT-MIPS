
#include "user.h"
#include "fcntl.h"

int main(void){

    int fd_process = open("process", O_RDONLY);
    int fd_pages = open("pages",  O_RDONLY);
    int fd_context = open("context",  O_RDONLY);
    int fd_flags = open("flags",  O_RDONLY);
    int fd_tf = open("tf", O_RDONLY);

    loadprocess(0,fd_process,fd_pages,fd_flags,fd_tf,fd_context);


    wait();
    exit();

}
