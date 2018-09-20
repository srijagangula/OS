#include<iostream>
using namespace std;
class matrix
{
int **p;
int row,column;
public:
matrix(int x,int y)
{
row=x;
column=y;
p=new int *[row];
for(int i=0;i<row;i++)
{
p[i]=new int[column];
}
}



};













/*int main()
{
int m,n,m1,n1,i,j,val,p[10][10];
cout<<"enter size of matreix"<<endl;
cin>>m>>n;
matrix m1(m,n);
cout<<"enter elements of matrix"<<endl;
for(i=0;i<m;i++)

{
for(j=0;j<n;j++)
{
cin>>p[i][j];}
cout<<"\n"<<endl;
}
for(i=0;i<m;i++)

{
for(j=0;j<n;j++)
{
cout<<p[i][j];
}
cout<<"\n"<<endl;
}


return 0;
}*/
