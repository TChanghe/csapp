/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Yzc258
 * @Date: 2022-06-17 14:00:18
 */
#include "csapp.h"

/* $begin fork */
/* $begin wasidefork */
int main() 
{
    pid_t pid;
    int x = 1;

    pid = Fork(); //line:ecf:forkreturn
    if (pid == 0) {  /* Child */
	printf("child : x=%d\n", ++x); //line:ecf:childprint
	//exit(0);
    }

    /* Parent */
    printf("parent: x=%d\n", --x); //line:ecf:parentprint
    exit(0);
}
/* $end fork */
/* $end wasidefork */

