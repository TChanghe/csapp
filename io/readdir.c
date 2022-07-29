/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Yzc258
 * @Date: 2022-07-24 15:08:25
 */
/* $begin readdir */
#include "csapp.h"

int main(int argc, char **argv)
{
    DIR *streamp; 
    struct dirent *dep; 

    /* $end readdir */
    if (argc != 2) {
        printf("usage: %s <pathname>\n", argv[0]);
        exit(1);
    }
    /* $begin readdir */
    streamp = Opendir(argv[1]);

    errno = 0;
    while ((dep = readdir(streamp)) != NULL) { 
        printf("Found file: %s, %d, %d\n", dep->d_name, dep->d_ino, dep->d_off); 
    } 
    if (errno != 0)
        unix_error("readdir error");

    Closedir(streamp); 
    exit(0);
}
/* $end readdir */
