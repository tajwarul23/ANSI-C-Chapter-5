#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,sum=0;
    printf("Enter two 2 digits numbers : ");
    scanf("%d %d",&a,&b);
    int c=a , d=b;
    printf("\t\t%d\n",a);
    printf("\tX\t%d\n",b);
    printf("_____________________________\n");
    while(b!=0)
    {
    int rem=b%10;
    printf("%dX%d is \t %d\n",rem,a,a*rem);
    a*=10;
    b=b/10;
    }
    printf("_____________________________\n");
    printf("And\tThem\t %d",c*d);

    

    return 0;
}
