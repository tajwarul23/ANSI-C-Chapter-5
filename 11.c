#include<stdio.h>
int main()
{
    int t;
    printf("Enter loop : ");
    scanf("%d",&t);
    while(t--)
    {
        int a;
        printf("Pen-Drive = \n1. 4gb\n2. 8gb\n3. 16gb\n4. 32gb\n5. 64gb\n6. 128gb\n7. 256gb\n8. 512gb\n9. 1TB\n Enter digit to view information : ");
        scanf("%d",&a);
        printf("ITEM NAME \t AVAILABILITY \t IN STOCK \t PRICES\n");
        if(a==1)
        printf("4GB PENDRIVE \t IN STOCK \t 9 PEICES \t 260BDT");
        else if(a==2)
        printf("8GB PENDRIVE \t IN STOCK \t 90 PEICES \t 500BDT");
        else if(a==3)
        printf("16GB PENDRIVE \t IN STOCK \t 91 PEICES \t 1000BDT");
        else if(a==4)
        printf("32GB PENDRIVE \t IN STOCK \t 922 PEICES \t 1400BDT");
        else if(a==5)
        printf("64GB PENDRIVE \t IN STOCK \t 91 PEICES \t 2100BDT");
        else if(a==6)
        printf("128GB PENDRIVE \t IN STOCK \t 92 PEICES \t 3000BDT");
        else if(a==7)
        printf("256GB PENDRIVE \t IN STOCK \t 92 PEICES \t 4500BDT");
        else if(a==8)
        printf("512GB PENDRIVE \t IN STOCK \t 999 PEICES \t 6000BDT");
        else if(a==9)
        printf("1TB PENDRIVE \t NOT IN STOCK \t 0 PEICES \t 8000BDT");
        else
        printf("Not Found");
        
    }
    return 0;
}

