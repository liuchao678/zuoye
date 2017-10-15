#include <iostream.h>
void main()
{
	int x,a,b;
	cout<<"请输入一个整数："<<endl;
	cin>>x;
	a=x%7;
	b=x%3;
	if (a==0||b==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

