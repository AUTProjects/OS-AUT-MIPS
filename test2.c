
#include "user.h"
#include "fcntl.h"

int main(void){

    int* p = (int*)malloc(sizeof(int));
    int fd = open("process",O_RDONLY);
    allocprocess((int)p);
    loadprocess((int)p,fd);

    exit();

}
