 #include<stdio.h>
int main()
{
    int a,sum=0,temp,b;
    printf("Enter a 3 digit number=");
    scanf("%d",&a);
    if(a>99&&a<1000)
    {
        temp=a;
        while(a>0)
        {
            b=a%10;
            sum=sum+b;
            a=a/10;

        }

       printf("\nSum 0f digits of %d=%d",temp,sum);
    }
    else
        printf("Not a 3 digit number");
    return 0;
}
