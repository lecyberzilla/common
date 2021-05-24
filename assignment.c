#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main (void)
{
int pid,status;
pid=fork();
if(pid>0)
{
printf("In Parent Process \nVUID: MC200204513\nMuhammad Saqlain Nasir: \n");

printf("Existing the Parent Process");
 wait(0);
 exit(1);
}
else if(pid==0)
{
int n = 3;
int i;
printf("In Child Process\nmultiplication table of 3 \n");
for(i=1;i<=10;i++)
{
printf("%d * %d= %d \n" ,n,i,i*n);
}
}
}
