#include<stdio.h>
long t(int x);
int main()
{
    int c;
    long f;
    printf("Enter value : ");
    scanf("%d",&c);
    f=t(c);
    printf("%d",f);

}
long t(int x){
if(x>=1)
    return x*t(x-1);
else
{ return 1;
}


}
