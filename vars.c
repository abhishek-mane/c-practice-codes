#include <stdio.h>

const int MAX = 10;

int GL = 10;

void test()
{
    printf("INSIDE TEST : %d", GL);
}

int main(int argc, char const *argv[])
{

    int sdfsdf = 10, df;

    char a = 'b';

    a = 'c';

    int const arr[5] = {1, 2, 3, 4, 5};

    // for(int i=0; i<5; ++i){
    //     arr[i] = arr[i]*arr[i];
    // }

    test();
    GL = 9;
    test();

    return 0;
}