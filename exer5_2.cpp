#include<iostream.h>
#include<stdio.h>
float fun(int n) 
{ 
    int i,j;
    int sum=0;
    float result=0.0;
    float temp;
	for(i=1;i<=n;i++)  
    {
        for(j=1;j<=i;j++)  
        {
            sum+=j;
        }
        temp=(float)1/sum;  
        result+=temp; 
        sum=0;         
    }
	return result;
} 
void main() 
{ 
    int n;
    float s; 
    printf("\nPlease enter N:"); 
    scanf("%d", &n); 
    s = fun(n); 
    printf("the result is: %f\n", s); 
}