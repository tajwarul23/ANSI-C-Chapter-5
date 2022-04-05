#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[10],b[10],c[10];
    printf("Enter your name : ");
    scanf("%s %s %s",&a,&b,&c);
    for (int i = 0; a[i]!='0' ; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
    }
    for (int i = 0; b[i]!='0' ; i++)
    {
        if(b[i]>='a' && b[i]<='z')
        b[i]=b[i]-32;
    }
    for (int i = 0; c[i]!='0' ; i++)
    {
        if(c[i]>='a' && c[i]<='z')
        c[i]=c[i]-32;
    }
    printf("%s %.1s. %s",a,b,c);
    printf("\n%.1s.%.1s. %s\n",a,b,c);
    printf("%s %.1s.%.1s.",c,a,b);
    

    return 0;
}
