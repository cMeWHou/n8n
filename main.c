#include <stdio.h>

extern int add(int a, int b);
extern int sub(int a, int b);

int main(void) {
    printf("Program is started\n");
    printf("Program is working\n");

    int a, b;

    scanf("%d %d", &a, &b);
    printf("Result of summation: %d\n", add(a, b));

    scanf("%d %d", &a, &b);
    printf("Result of subtraction: %d\n", sub(a, b));

    printf("Program is finished\n");

    return 0;
}