
#include<stdio.h>

int main()
{
    int a[200],i,b,min=1000;
    printf("enter limit :");
    scanf("%d",&b);
    printf("Enter your Element :");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);




}
