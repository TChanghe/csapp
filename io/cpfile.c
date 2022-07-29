/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Yzc258
 * @Date: 2022-07-24 10:47:44
 */
/* $begin cpfile */
#include "csapp.h"

int main(int argc, char **argv) 
{
    int n, fd;
    rio_t rio;
    char buf[MAXLINE];
    fd = open("./eol.txt", O_RDONLY, 0);

    Rio_readinitb(&rio, fd);
    while((n = Rio_readlineb(&rio, buf, MAXLINE)) != 0) 
	Rio_writen(STDOUT_FILENO, buf, n);
    /* $end cpfile */
    exit(0);
    /* $begin cpfile */
}
/* $end cpfile */



