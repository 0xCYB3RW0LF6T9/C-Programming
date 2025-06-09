#include<stdio.h>
void t(int *a)
{ (*a)++;
printf("IN function : %d\n",*a);


}
int main()
{
    int x= 10,*s;
    s=&x;
    t(s);
    printf("In main functiuon : %d",x);



}
