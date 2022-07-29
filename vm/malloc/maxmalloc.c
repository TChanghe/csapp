/*
 * @Description: 
 * @Version: 1.0
 * @Autor: Yzc258
 * @Date: 2022-07-23 11:53:57
 */
  #include <unistd.h>
 #include <stdlib.h>
 #include <stdio.h>

  #define A_MEGABYTE (1024 * 1024)  //每次分配1M
  #define PHY_MEM_MEGS ( 1 )
 
  int main()
   {
          char *some_memory;
          size_t size_to_allocate = A_MEGABYTE;
          int meg_obtained = 0;
 
          while(meg_obtained < PHY_MEM_MEGS * 2)
         {
             some_memory = (char*)malloc(size_to_allocate); //每次some_memory获得1M空间，
             if(some_memory != NULL)
              {
                 meg_obtained++;
                sprintf(some_memory,"Hello world");
                printf("%lx - now allocated %d Megabytesn",some_memory,meg_obtained);
              }
             else
                 exit(EXIT_FAILURE);
         }
 
          exit(EXIT_SUCCESS);
  }