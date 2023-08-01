#include <stdio.h>

long long factorial(int num);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        long long result = factorial(num);
        printf("Factorial of %d is %lld.\n", num, result);
    }
    
    return 0;
}

long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

