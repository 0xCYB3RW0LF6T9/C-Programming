#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file = fopen("Test.txt","w");

    char x[50];
    strcpy(x,"This is wolf");
    int len=strlen(x);

    if(file==NULL)
    {
        printf("file not created !");

    }
    else{
        printf("File created ");
for(int i=0;i<len;i++)
{
    fputc(x[i],file);

}
printf("operation Successful");

    }





}
