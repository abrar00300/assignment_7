#include<stdio.h>
int main()
{
    int a,b,k,l,temp_a,temp_b,n=2;
    printf("\nEnter two number=");
    scanf("%d %d",&a,&b);
    temp_a=a;
    temp_b=b;
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
        {
            break;
        }
        if(l==0&&k==0)
            n++;

    }
    if(k==1&&l==1)
        printf("\n%d and %d are not co-prime numbers",temp_a,temp_b);
    else
        printf("\n%d and %d are co-prime numbers",temp_a,temp_b);
    return 0;

}
