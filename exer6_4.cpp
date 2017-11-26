#include<iostream.h>
int main()
{
    int Fibonacci[20], i;
    Fibonacci[0]=Fibonacci[1]=1;
    for(i=2; i<20; i++)
        Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
    for(i=0; i<20; i++)
        cout<<Fibonacci[i]<<" ";                              
    cout<<endl;
    return 0;
}
