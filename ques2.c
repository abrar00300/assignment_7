#include<stdio.h>
int main()
{
    int a=1,b=0,c,n;
    printf("\nEnter number=");
    scanf("%d",&n);
    printf("\nFirst %d Fibonacci numbers are= %d %d ",n,b,a);
    for(int i=1;i<=n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        b=a;
        a=c;

    }

    return 0;

}
