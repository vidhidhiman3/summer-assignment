#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter the number");
    scanf("%d",&n);
     if (n == 0) {
        count = 1;
    }

    
    while (n!= 0) {
        n= n/ 10; 
        count++;    
    }

    printf("Total digits: %d\n", count);

    return 0;
}
