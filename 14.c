#include<stdio.h>
int main()
{
    int n=5,j=0,x=n;
    //scanf("%d, &n);
    for(int i=5;i>0;i--){
        for(int k=j;k;k--){printf(" ");}
        for(n=x;n>0;n--)
        {
            printf("%d", n);
        }
        j++;
        x--;
            printf("\n");
    }

    return 0;
}
