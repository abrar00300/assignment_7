  #include<stdio.h>
int main()
{
    int b,i,pw=1,sum=0,a,temp,cnt=0;
    printf("Enter numbers=");
    scanf("%d",&a);
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
    if(sum==temp)
        printf("\n%d is an Armstrong number",temp);
    else
        printf("\n%d is not an Armstrong number",temp);
    return 0;
}
