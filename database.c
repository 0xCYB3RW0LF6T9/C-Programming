#include<stdio.h>
#include<string.h>
struct t{

int  roll;
char name[100];
char bg[5];



};




int main()
{struct t p[5];
char x[100];
int i;
for(i=0;i<2;i++)
{
    printf("Information for person %d\n",i+1);
    printf("enter your name : ");
    gets(p[i].name);
    printf("Enter your roll : \n");
    scanf("%d",&p[i].roll);
    printf("");
    printf("Enter your blood-group : \n");
    gets(p[i].bg);
}
printf("enter your target name : \n");
scanf("%s",x);

for(i=0;i<2;i++)
{
    if(strcmp(p[i].name,x))
    {
        printf("Name : %s\n",p[i].name);
        printf("Roll : %d \n",p[i].roll);
        printf("blood group : %s\n",p[i].bg);
    }
}





}
