#include<stdio.h>
int main()
{
    int b,c,a;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("\nEnter value of b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\nb=%d",a,b);
    return 0;
}
