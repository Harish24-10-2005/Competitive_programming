#include<iostream>
using namespace std;
int nn(int n)
{
    if(n>97)
    return n-10;
    else
    return nn(nn(n+11));
}
int main()
{
    cout<<nn(95);
}