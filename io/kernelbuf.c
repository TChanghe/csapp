#include "csapp.h"

int main()
{
    close(1);
    int fd = open("./log.txt", O_CREAT|O_WRONLY, 0644);

    printf("hello");
    printf("hello");
    //printf("hello\n");
   // printf("hello\n");

    fflush(stdout);
    close(1);
    
    return 0;
}