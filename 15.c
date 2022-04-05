#include<stdio.h>
int main()
{
    int years;
    float amount , interest,result;
    printf("Enter Amount : ");
    scanf("%f",&amount);
    printf("Enter interest : ");
    scanf("%f",&interest);
    printf("Enter Years : ");
    scanf("%d",&years);
    result= amount + (amount*interest/100)*years ;
    printf("After %d years your TOTAL AMOUNT(amount+interest) is = %.3f",years,result);
    return 0;
}
