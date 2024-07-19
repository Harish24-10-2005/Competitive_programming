#include<iostream>
using namespace std;
bool check_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[10]={1,2,3,4,4,6,5,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(check_sort(arr,n))
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is Not Sorted";
    }
}