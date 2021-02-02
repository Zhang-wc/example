#include <stdio.h>
#include <string.h>

void test()
{
    printf("this is function\n");
    int *a = NULL;
    if (*a > 10) {
        printf("a>10\n");
    }
    char *tmp = NULL;
    memcpy(tmp, "hello bit!", 10);
    printf("%s\n", tmp);
    return;
}
int main()
{
    printf("hello bit\n");
    int i = 0;
    for (i = 0; i < 5; i++) {
        printf("----------\n");
    }
    test();
    printf("over~~\n");
    return 0;
}
