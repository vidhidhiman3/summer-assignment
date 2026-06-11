#include<stdio.h>
int main()
{
    int n,d;
    int product= 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        d= n%10;
        product = product*d;
        n = n/10;
    }

    printf("Product = %d\n", product);
    return 0;
}
