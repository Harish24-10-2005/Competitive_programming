#include<iostream>
using namespace std;
int sum_r(int n, int sum)
{
    if(n<1)
    {
        return sum;
    }
    else
    {
        sum +=n;
        return sum_r(n-1,sum);
    }
}
int sum(int n)
{
    return n*(n+1)/2;
}
int main()
{
    cout<<sum(5)<<endl;
    cout<<sum_r(5,0);
    return 0;
}