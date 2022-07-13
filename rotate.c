 #include<stdio.h>
int main()
{
    int a,temp;
    printf("\nEnter any 3 digit number=");
    scanf("%d",&a);\
    if(a>99&&a<1000)
    {
        temp=a%10;
        a/=10;
        temp*=100;
        a+=temp;
        printf("\nResulting number=%d",a);

    }
    else
        printf("\nNot a 3 digit number");
    return 0;
}
