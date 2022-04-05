#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a floating value : ");
    scanf("%f",&a);
    printf("Printing in two decimal places = %.2f\n",a);
    printf("Printing in two decimal places = %.4f\n",a);
    printf("Printing in two decimal places = %.8f\n",a);
    return 0;
}
