#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int brute_force(int arr[],int n)
{
    sort(arr,arr+n);
    int sec_small = arr[0];
    for (int i = 1; i < n; i--)
    {
        if(arr[i]!=sec_small)
        {
            sec_small=arr[i];
            break;
        }
    }
    return sec_small;
}
int better(int arr[],int n)
{
    int small=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
        }
    }
    int sec_small = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<sec_small && arr[i]>small)
        {
            sec_small=arr[i];
        }
    } 
    return sec_small;
}
int optimal(int arr[],int n)
{
    int small=arr[0];
    int sec_small = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            sec_small=small;
            small = arr[i];
        }
        else if(arr[i]>small && arr[i]<sec_small)
        {
            sec_small=arr[i];
        }
    }
    return sec_small;
}
int main()
{
    int arr[6]={9,4,1,5,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Brute Froce: T.C O(NlogN + N) "<<brute_force(arr,n)<<endl;
    cout<<"Better:T.C O(2N) "<<better(arr,n)<<endl;
    cout<<"Optimal:T.C O(N) "<<optimal(arr,n)<<endl;
}