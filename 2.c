#include<stdio.h>
#include<string.h>
int main()
{   float x,y;
    printf("Enter the value X & Y :");
    scanf("%f %f",&x,&y);
    printf("x+y/x-y = %.2f",((x+y)/(x-y)));
    printf("\nx+y/2 = %.2f",(x+y)/2);
    printf("\nx+y * x-y = %.2f",((x+y)*(x-y)));

    return 0;
}
