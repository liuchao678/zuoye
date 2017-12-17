#include<iostream.h>
void main()
{
   int i,a[10];
   void inv(int *x,int n);
   cout<<"请输入原数组："<<endl;
   for(i=0;i<10;i++)
	   cin>>a[i];
   inv(a,10);
   cout<<"反序存放后的数组："<<endl;
   for(i=0;i<10;i++)
	   cout<<a[i]<<endl;

}
void inv(int *x,int n)
{
   int temp,*p,*q,m=(n-1)/2;
   p=x;
   q=x+n-1;
   for(;p<=x+m;p++,q--)
   {
     temp=*p;
	 *p=*q;
	 *q=temp;
   }
}