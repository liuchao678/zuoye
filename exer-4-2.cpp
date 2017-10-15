#include<iostream.h>
void main()
{
	int year,leap,i,n,sum=0;
	i=0;
	for(year=2000;year<=3000;year++)
	{
		leap=1;
		for(n=2000;n<year;n++)
		{
		if(year%400==0||(year%4==0&&year%100!=0))
			leap=1;
		else
			leap=0;
		}
	    if(leap)
		{
			sum++;
		    cout<<year<<" ";
		    i++;
		    if(i%10==0)
			    cout<<endl;
		}
	}
	if(i%10!=0)
		cout<<"sum="<<sum<<endl;
}
