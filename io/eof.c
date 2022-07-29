#include "csapp.h"

int main()
{
    char *buf;
    int i, num, fd;

    fd = open("./foobar.txt", O_RDONLY, 0);
    for(i = 0 ;i < 4; i++){
        num = fread(fd, buf, 4);
        fwrite(1, buf, 4);
        printf("\n num: %d\n", num);
    }

    return 0;
}