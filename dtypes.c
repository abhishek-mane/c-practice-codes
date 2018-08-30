#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int i = 9;

    float f = 4.6;

    char c = 'a';

    char c2 = 'b';

    char str[5] = "abc";

    printf("%d\n", i);
    printf("%d\n", c+c2);
    printf("%c\n", 195);
    printf("%.1f\n", f);
    printf("%s\n", str);

    return 0;
}