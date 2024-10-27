#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    if (fork())
    {
        printf("nonzero\n");
    }
    else
    {
        printf("zero\n");
    }
}