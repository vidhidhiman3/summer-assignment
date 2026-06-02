#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("enter the number upto which the sum has to be taken");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the required sum is =%d ",sum);
    return 0;
}
