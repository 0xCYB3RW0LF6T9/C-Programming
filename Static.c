#include<stdio.h>
void t()
{
    static int x=1;
    x+=5;
    printf("%d\n",x);
}
int main()
{
    t();
    t();



}
