#include<stdio.h> 
#include<unistd.h>
#include<stdlib.h>
int main()
{

   printf("输出一遍\n");

   pid_t ret= fork();
   if(ret > 0)
   {//parent
     int count = 0;
     while(count < 5){
       printf("i am parent pid is : %d\n",getpid());
       sleep(1);
       count++;
     } 
     exit(0);
   }
   else if(ret == 0)
   {
    //child
     while(1){
       printf("i am child pid is : %d ppid  : %d\n",getpid(),getppid());
       sleep(2);
     }
   }
   else 
   {
     printf("fork error\n");
   }
   sleep(1);
   return 0;
}
