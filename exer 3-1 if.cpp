#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<=9)
		cout<<"数值小于10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<"数值10~99"<<endl;
		else
			if(x>=100&&x<=999)
				cout<<"数值100~999"<<endl;
			else
				if(x>=1000)
					cout<<"数值1000以上"<<endl;
				
}
 