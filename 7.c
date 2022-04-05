#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter a floating value : ");
    scanf("%f",&a);
    printf("Printing in two decimal places = %.2e\n",a);
    printf("Printing in two decimal places = %.4e\n",a);
    printf("Printing in two decimal places = %.8e\n",a);
    return 0;
}
