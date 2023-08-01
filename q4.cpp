#include <stdio.h>

int main() {
    int num, i;
    long long fib1 = 0, fib2 = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");
    printf("%lld, %lld, ", fib1, fib2);

    for (i = 3; i <= num; i++) {
        next = fib1 + fib2;
        printf("%lld, ", next);
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");
    return 0;
}

