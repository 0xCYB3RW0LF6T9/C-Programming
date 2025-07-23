#include<stdio.h>
int main()

{


    int a;
    printf("Enter your year : ");
    scanf("%d",&a);

    if(a%400==0)
      {

       printf("LEap year");}
   else if(a%4==0 && a%100!=0)
       {

        printf("LEap year ");
        }

    else {printf("Not a leap year");}



}
