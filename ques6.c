#include<stdio.h>
int main()
{
    int i,j;
    printf("Prime numbers till 100=");
    for(i=1;i<=100;i++)
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
