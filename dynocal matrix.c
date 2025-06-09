#include<stdio.h>
int main()
{
   int a[100][100],b,c,i,j;
   printf("Enter limit :");
   scanf("%d",&b);

   for(j=0;j<b;j++)
   for(i=0;i<b;i++)
   {
       if(a[i]==a[j])
   scanf("%d",&a[i][j]);
   }

    for(j=0;j<b;j++)
   {for(i=0;i<b;i++)
   {
   printf("%d",a[i][j]);
   }
printf("\n");
   }


}
