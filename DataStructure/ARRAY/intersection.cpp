#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // arr1, arr2: the arrays
    // n, m: size of arrays
    // Function to return a list containing the union of the two arrays. 
    vector<int> find_intersection(int arr1[], int arr2[], int n, int m) {
        vector<int>res;
        int i=0;
        int j=0;
        while(i<n && i<m)
        {
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                j++;
            }
            else{
                res.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};

int main() {
    int n = 5;
    int arr1[] = {1, 2, 3, 4, 5};  
    int m = 5;
    int arr2 [] = {1, 2, 3, 6, 7};
    Solution ob;
    vector<int> ans = ob.find_intersection(arr1, arr2, n, m);
    for (int i : ans) cout << i << ' ';
    cout << endl;
    
    return 0;
}
