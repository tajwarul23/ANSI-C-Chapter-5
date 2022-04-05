#include<stdio.h>
#include<string.h>
#include<string.h>
int main()
{
    int t;
    printf("Enter test case : ");
    scanf("%d",&t);
    while(t--)
    {
        printf("Enter a number : ");
        float a;
        scanf("%f",&a);
        printf("The round figure of %.2f number is = %.2f\n",a,round(a));
    }
    return 0;
}
