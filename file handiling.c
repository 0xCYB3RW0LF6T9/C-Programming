#include<stdio.h>
int main()
{
    FILE *t;
    t=fopen("x.txt","a");
    if(t==NULL)
    {
        printf("File not created !");

    }
    else{printf("file created");}
    }






