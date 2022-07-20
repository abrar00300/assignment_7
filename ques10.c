  #include<stdio.h>
int main()
{
    int b,i,pw=1,k=1,sum=0,a,temp,cnt=0;
    printf("Armstrong number under 1000 are=");
    for(a=1;a<=1000;a++)
    {
        sum=0;
        cnt=0;
        temp=a;
        while(a>0)
        {
            cnt++;
            a/=10;
        }
        a=temp;
        while(a>0)
        {
            pw=1;
            b=a%10;
            for(i=1;i<=cnt;i++)
            {
                pw=pw*b;
            }
            sum=sum+pw;
            a/=10;
        }
        a=temp;
        if(sum==temp)
            printf("%d ",sum);
    }

    return 0;
}
