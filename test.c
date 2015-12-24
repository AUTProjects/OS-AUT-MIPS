#include"user.h"


int main(void){

int i ;
int pid = getpid();
for (i = 0; i < 10; ++i) {
        fork();
    }
find(pid);
    wait();
exit();

}
