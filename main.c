#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    printf("Program is started\n");
    printf("Program is working\n");

    int a, b;

    scanf("%d %d", &a, &b);
    printf("Result of summation: %d\n", add(a, b));

    printf("Program is finished\n");

    return 0;
}