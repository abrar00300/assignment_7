  #include<stdio.h>
int main()
{
    int i,j,a;
    printf("Enter numbers=");
    scanf("%d",&a);
    printf("Next prime numbers of %d=",a);
    i=a+1;
    while(1)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                i++;
                break;
            }
        }
        if(i==j)
        {
            printf("%d",i);
            break;
        }

    }
    return 0;
}
