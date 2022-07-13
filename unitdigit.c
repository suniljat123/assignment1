#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter any number=");
    scanf("%d",&n);
    a=n%10;
    printf("Unit digit of %d=%d",n,a);
    return 0;
}
