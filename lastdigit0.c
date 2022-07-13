 #include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number=");
    scanf("%d",&a);
    a/=10;
    a*=10;
    printf("\nResulting Number=%d",a);
    return 0;
}
