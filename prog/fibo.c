#include<stdio.h>
int fib(int);
int main()
{
int n,i=0,c;
printf("enter the fib no");
scanf("%d",&n);
printf("fib series is \n");
for(c=1;c<=n;c++)
{
printf("%d\n",fib(i));
i++;
}
return 0;
}
int fib(int n)
{
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
return (fib(n-1)+fib(n-2));
}
