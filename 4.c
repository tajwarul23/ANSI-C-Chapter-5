#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i=0,j=0,a;
    float b;
    printf("Enter a floating value : ");
    scanf("%f",&b);
    a=round(b);
    if(a>=0 && a<=20)
    {
        for ( i = 1; i < 4; i++)
        {
            for ( j = 1; j <= a ; j++)
            {
                printf("* ");
            }
            while(i==2)    
            {
                printf("%.2f  ",b);
                break;
            }
            
            printf("\n");
                
            
        }
        
    }
    return 0;
}
