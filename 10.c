#include <stdio.h>
int main()
{
    char name1[30],name2[30],allname[100];
    int i,j,a,b;
    float c,d;
   
    
    printf("Enter 1st name : ");
    gets(name1);
    printf("Enter 2nd name : ");
    gets(name2);
   
    
    printf("Enter Code For Product 1 & 2 : ");
    scanf("%d %d",&a,&b);
    printf("Enter prices for both products : ");
    scanf("%f %f",&c,&d);
    printf("Name \t\t Code \t\t Price\n");
    printf("%s \t\t %d \t\t %f \n",name1,a,c);
    printf("%s \t\t %d \t\t %f \n",name2,b,d);
    
    
    return 0;
}