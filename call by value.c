#include<stdio.h>

void test(int a)
{
    int flag=1,i;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            flag=0;
        }
    }
   if(flag==1)
   {
       printf("%d is a prime number .",a);
   }
   else
   {
       printf("not a prime number");
   }
}


int main()
{

    int x;
    printf("Enter your number : ");
    scanf("%d",&x);

    test(x);

}
