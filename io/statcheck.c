/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Yzc258
 * @Date: 2022-07-24 14:40:28
 */
/* $begin statcheck */
#include "csapp.h"

int main (int argc, char **argv) 
{
    struct stat stat;
    char *type, *readok;

    /* $end statcheck */
    if (argc != 2) {
	fprintf(stderr, "usage: %s <filename>\n", argv[0]);
	exit(0);
    }
    /* $begin statcheck */
    Stat(argv[1], &stat);
    if (S_ISREG(stat.st_mode))     /* Determine file type */
	type = "regular";
    else if (S_ISDIR(stat.st_mode))
	type = "directory";
    else 
	type = "other";
    if ((stat.st_mode & S_IRUSR)) /* Check read access */
	readok = "yes";
    else
	readok = "no";

    printf("type: %s, read: %s, stat.st_mode:%x, S_IRUSR:%x, %x, %x\n", type, readok, stat.st_mode, S_IRUSR, S_IWUSR, S_IXUSR);
    exit(0);
}
/* $end statcheck */
