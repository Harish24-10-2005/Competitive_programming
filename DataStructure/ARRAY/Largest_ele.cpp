#include<iostream>
#include<algorithm>
using namespace std;
int brute_froce(int arr[],int n)
{
    sort(arr,arr+n);
    return arr[n-1];
}
int optimal(int arr[],int n)
{
    int large = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    return large;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={3,2,1,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Brute Force: T.C O(NlogN) "<<brute_froce(arr,n)<<endl;
    cout<<"Optimal Solution: T.C O(N) "<<optimal(arr,n)<<endl;
    
}