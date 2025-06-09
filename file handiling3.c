#include<stdio.h>
#include<string.h>
int main()
{
    FILE *c;
    char s[50];
    c=fopen("1.txt","w");
    if(c==NULL)
    {
        printf("File not created !");

    }
    else {

printf("Enetr name : ");
fgets(s,200,stdin);
fputs(s,c);//first one is string array second one is pointer location
printf("Operation successful !\n");

printf("file created successfully !");



    }





}
