#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++)
    {
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}
