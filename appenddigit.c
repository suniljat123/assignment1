 #include<stdio.h>
int main()
{
    int a,d;
    printf("\nEnter any number=");
    scanf("%d",&a);
    printf("\nEnter any digit which you want to append=");
    scanf("%d",&d);
    a=a*10+d;
    printf("\nResulting Number=%d",a);
    return 0;
}
