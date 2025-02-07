// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int N =36;
    for(int i=1;i*i<N;i++)
    {
        if(N%i==0)
        cout<<i<<" ";
    }
    cout << "";

    return 0;
}