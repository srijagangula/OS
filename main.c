#include<stdio.h>
int sum(int,int);
int mul(int,int);

int main()
{
int x,y,z;
int choice;
printf("enter two integers:");
scanf("%d%d",&x,&y);

printf("1:Sum 2:Mul\n");
printf("Enter your choice");
scanf("%d",&choice);
if(choice==1) 
{
	z=sum(x,y);
}
else if	(choice==2)     
{
	z=mul(x,y);
}
	else return 0;
}
                                                                 
