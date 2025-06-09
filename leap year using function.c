#include<stdio.h>

int test()
{
 int x;
 printf("Enter your number : ");
 scanf("%d",&x);

    return x;
}

int main()
{
     int c;
     c=test();




    if(c%400==0)
    {
        printf("Leap year ");
    }
    else if(c%4==0 && c%100!=0)
    {
        printf("Leap year ");
    }
    else{
        printf("Not a leap year");
    }
}
