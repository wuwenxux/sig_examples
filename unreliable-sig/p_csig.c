#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void sigup()
{
    printf("child hang up");
}
void sigint()
{
    printf("child the child.");
}
void sigquit()
{
    printf("child quit.");
}
int main()
{
    int ret;
    int pid;
    pid = fork();
    
    signal(SIGINT,sigint);

    return 0;
}