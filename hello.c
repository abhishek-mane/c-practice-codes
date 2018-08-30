#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        printf("Usage : ./a.out <YOUR NAME>");
        return 0;
    }

    int n = atoi(argv[1]);

    printf("SQUARE => %d\n", n * n);

    return 0;
}