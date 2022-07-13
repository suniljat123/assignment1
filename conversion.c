 #include<stdio.h>
int main()
{
    float a,usd=76.23,amount;
    printf("\nEnter amount=");
    scanf("%f",&a);\
    amount=a/usd;
    printf("\n%.2fRupees=%.2f USD",a,amount);
    return 0;
}
