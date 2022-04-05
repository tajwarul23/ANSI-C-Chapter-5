#include<stdio.h>
int main()
{
    float a;
    printf("Enter Doler Amount = ");
    scanf("%f",&a);
    printf("%.2f$ = %.2f EURO\n",a,a*0.91);
    printf("%.2f$ = %.2f INR\n ",a,a*76.00);
    return 0;
}
