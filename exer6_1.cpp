#include<iostream.h>
#define N 100
void main()
{
	int a[N],n,i,t;
	int	max,min,j,k;
	cout<<"请输入数组的大小:";
	cin>>n;
	cout<<"输入"<<n<<"各个值"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter a["<<i<<"]:";
		cin>>a[i];
	}
	max=min=a[0];
	j=k=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			j=i;
		}
		else
			if(a[i]<min)
			{
				min=a[i];
				k=i;
			}
	}
	if(j!=k)
	{
		t=a[j];
		a[j]=a[k];
		a[k]=t;
	}
	cout<<"交换后的数组:";
		for(i=0;i<n;i++)
			cout<<a[i]<<",";
}
		
		