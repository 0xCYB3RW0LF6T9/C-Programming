#include<stdio.h>

int test(){
int a;
printf("Enter your result : ");
scanf("%d",&a);
return a;
}
int main()
{
    int x;
    x=test();
    if(x>80 && x<100)
    {
        printf("A+");
    }
    else if(x>70 && x<80)
    {
        printf("A");
    }
    else if(x>60 && x<70)
    {
        printf("B");
    }
    else if(x>50 && x<60)
    {
        printf("C");
    }
else {printf("Fail");}
}
