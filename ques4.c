#include<stdio.h>
int main()
{
    int a,b,k,l,c=1,n=2;
    printf("\nEnter two number=");
    scanf("%d %d",&a,&b);
    printf("\nHcf of %d and %d is=",a,b);
    while(a>1||b>1)
    {
        k=0;
        l=0;
        if(a%n==0)
        {
            a=a/n;
            k=1;
        }
        if(b%n==0)
        {
            b=b/n;
            l=1;
        }
        if(k==1&&l==1)
            c=c*n;
        if(l==0&&k==0)
            n++;

    }
    printf("%d",c);

    return 0;

}
