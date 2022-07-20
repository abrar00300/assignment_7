#include<stdio.h>
int main()
{
    int a=1,b=0,c=0,n;
    printf("\nEnter number=");
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        c=a+b;
        b=a;
        a=c;

    }
    if(n==0)
        printf("0");
    else
        printf("%d",a);
    return 0;

}
