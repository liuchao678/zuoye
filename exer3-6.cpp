#include <iostream.h>
void main()
{
	int k;
	float r,s,l,pi;
	cout<<"请输入圆的半径r和一个整型数k："<<endl;
	cin>>r>>k;
	pi=3.14;
	k>=1&&k<=3;
	if (k<2)
		s=pi*r*r;
	else
		if (k==2)
			l=2*pi*r;
		else
			{
				s=pi*r*r;
				l=2*pi*r;
			}
	cout<<"圆的面积："<<s<<endl<<"圆的周长："<<l<<endl;
}

		