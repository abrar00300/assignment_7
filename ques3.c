#include<stdio.h>
int main()
{
   long int a=1,b=0,f=1,n,c,ar[100],x=0;
    printf("enter number to check if its present in fabonachi series = ");
    scanf("%d",&n);
    for(int i=1;i<=100;i++)
    {
        c=a+b;
        ar[x]=c;
        x++;
        b=a;
        a=c;
    }
    printf("\n");
    for(int i=0;i<=10;i++)
    {
        if(n==ar[i])
        {
            printf("%d is present in fabocnachi series ",n);
            f=0;
            break;
        }
    }
    if(f!=0)
        printf("%d is not present in fabonachi series ",n);
    return 0;

}

