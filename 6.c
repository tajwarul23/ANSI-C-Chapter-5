#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 intigers : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d, ",a);
    printf("%d, ",b);
    printf("%d\n",c);
    printf("%-10d, %-10d, %-10d\n",a,b,c);
    printf("%d, %d, %d\n",a,b,c);

    return 0;
}
