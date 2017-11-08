#include <iostream.h>
float fun(double h)
{
	double H;
	int m,n;
	m=(int)(h*1000)%10;//m为小数点后第三位
	n=h*100;
	if(m>4)
		n+=1;
	H=n/(double)100;
	return H;
}
void main()
{
	double h;
	cout<<"请输入h的值："<<endl;
	cin>>h;
	cout<<fun(h)<<endl;
}


		
