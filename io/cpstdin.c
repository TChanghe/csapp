/* $begin cpstdin */
#include "csapp.h"

int main(void) 
{
    char c;
    int fd;
    FILE *f;
    fd = open("./eol.txt", O_RDONLY, 0);
    f = fopen("./eol.txt", "r");
    printf("stream: %d\n", f);
    printf("test location;");
    while(Read(fd, &c, 1) != 0) 
	Write(STDOUT_FILENO, &c, 1);
    exit(0);
}
/* $end cpstdin */
