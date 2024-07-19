#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int brute_force(int arr[],int n)
{
    sort(arr,arr+n);
    int sec_large = arr[n-1];
    for (int i = n - 2; i >= 0; i--)
    {
        if(arr[i]!=sec_large)
        {
            sec_large=arr[i];
            break;
        }
    }
    return sec_large;
}
int better(int arr[],int n)
{
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    int sec_large = INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>sec_large && arr[i]<large)
        {
            sec_large=arr[i];
        }
    } 
    return sec_large;
}
int optimal(int arr[],int n)
{
    int large=arr[0];
    int sec_large = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            sec_large=large;
            large = arr[i];
        }
        else if(arr[i]<large && arr[i]>sec_large)
        {
            sec_large=arr[i];
        }
    }
    return sec_large;
}
int main()
{
    int arr[7]={3,2,1,4,5,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Brute Froce: T.C O(NlogN + N) "<<brute_force(arr,n)<<endl;
    cout<<"Better:T.C O(2N) "<<better(arr,n)<<endl;
    cout<<"Optimal:T.C O(N) "<<optimal(arr,n)<<endl;
}