#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<2)
    return n;
    else
    return fibo(n-2)+fibo(n-1);
}
int main()
{
    cout<<fibo(5);
    return 0;
}