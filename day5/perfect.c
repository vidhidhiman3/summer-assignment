#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
    if(n%i==0){
        sum=sum+i;
    }
}
if(sum==n){
    printf("perfect number:",n);
}else{
    printf("no a perfect number:",n);
}
return 0;
}
