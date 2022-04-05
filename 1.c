#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[20];
    printf("Enter WORDPROCESSING : ");
    scanf("%4s %s",&a,&b);
    for (int i = 0; a[i]!='\0',b[i]!='\0'; i++)
    {
        if((a[i]>='a' && a[i]<='z') )
        a[i]=a[i]-32;
        if(b[i]>='a' && b[i]<='z')
        b[i]=b[i]-32;
    }
    printf("%s %s\n",a,b);
    printf("%s\n%s\n",a,b);
    printf("%.1s.%.1s.",a,b);
    
    return 0;
}
