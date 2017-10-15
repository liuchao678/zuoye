#include<iostream.h>
void main()
{
	int m,n;
	for(m=1;m<99;m++)
	{
		n=m*m-m;
		if(m<10&&n%10==0)
		    cout<<m<<"  ";
		if(m>9&&n%100==0)
			cout<<m<<"  ";
	}
}



