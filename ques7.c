 #include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Prime 2 numbers=");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("prime numbers between=",a);
    for(i=a;i<=b;i++)
    {

        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;

        }
        if(j==i)
            printf("%d ",j);
    }
    return 0;
}
