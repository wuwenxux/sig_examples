#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void handle(int signo)
{
    printf("A signal is coming.%d\n",signo);
}
int main()
{

    printf("Start a procedure.\n");
    signal(SIGINT,handle);
    while(1){
    }
    return 0;
}