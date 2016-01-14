
#include "user.h"
#include "fcntl.h"

int main(void){

    int* pr = (int*)malloc(sizeof(int));
    int fd = open("process",O_CREATE | O_RDWR);
    find(getpid(),(int)pr);
    saveprocess(*pr,fd);

    exit();

}
