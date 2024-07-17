#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return fact(n-1)*n;
}
int main()
{
    cout<<fact(5);
    return 0;
}