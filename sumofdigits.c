#include<stdio.h>
int main()
{
    int i,n,d,sum=0;
    printf("Enter the digit");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    
}
printf("the required sum is= %d\n",sum);
return 0;
}
