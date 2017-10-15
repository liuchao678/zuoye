#include<iostream.h>
void main()
{
	int i,n;
	i=-1;
	cin>>n;
	while(n!=1)
	{
		if(n%2==0)
			n=n/2;
		else
			n=n*3+1;
		i++;
	}
	cout<<"i="<<i<<endl;
}