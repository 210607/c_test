#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("你好！\n");
    printf("hehe！\n");
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(long long));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    getchar();
    return 0;
}