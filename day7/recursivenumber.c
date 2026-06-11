#include <stdio.h>

int reverse_recursive(int num, int reversed_so_far) {
    if (num == 0) {
        return reversed_so_far;
    }
  
    int last_digit = num % 10;
    
    
    reversed_so_far = (reversed_so_far * 10) + last_digit;
    
    
    return reverse_recursive(num / 10, reversed_so_far);
}

int main() {
    int number;

    
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    int result = reverse_recursive(number, 0);

    
    printf("Reversed Number: %d\n", result);

    return 0;
}
