#include <stdio.h>
#include <unistd.h>

/*
main - process id pid

Return: always 0
*/
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n",my_pid);
    return (0);
}