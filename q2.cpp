#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter the number of elements in the set: ");
    scanf("%d", &num);
    
    int numbers[num];
    
    printf("Enter the elements of the set:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("Results:\n");
    for (i = 0; i < num; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is an Even number.\n", numbers[i]);
        } else {
            printf("%d is an Odd number.\n", numbers[i]);
        }
    }
    
    return 0;
}

