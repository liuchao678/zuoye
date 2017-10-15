#include <iostream.h>
void main()
{
	int a,b,x,y;
	cout<<"输入整数a和b："<<endl;
	cin>>a>>b;
	x=a%b;
	if (x=0)
		y=a/b;
	else
	{
		y=a/b;
		x=a%b;
	}
	cout<<"a/b"<<endl
		<<"余数："<<x<<endl
		<<"整数商："<<y<<endl;
}

		



