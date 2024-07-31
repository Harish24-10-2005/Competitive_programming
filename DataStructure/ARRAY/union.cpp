#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // arr1, arr2: the arrays
    // n, m: size of arrays
    // Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        vector<int> union_arr;
        int i = 0;
        int j = 0;
        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                if (union_arr.empty() || union_arr.back() != arr1[i]) {
                    union_arr.push_back(arr1[i]);
                }
                i++;
            } else if (arr1[i] > arr2[j]) {
                if (union_arr.empty() || union_arr.back() != arr2[j]) {
                    union_arr.push_back(arr2[j]);
                }
                j++;
            } else {
                if (union_arr.empty() || union_arr.back() != arr1[i]) {
                    union_arr.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        while (i < n) {
            if (union_arr.empty() || union_arr.back() != arr1[i]) {
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        while (j < m) {
            if (union_arr.empty() || union_arr.back() != arr2[j]) {
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
        return union_arr;
    }
};

int main() {
    int n = 5;
    int arr1[] = {1, 2, 3, 4, 5};  
    int m = 5;
    int arr2 [] = {1, 2, 3, 6, 7};
    Solution ob;
    vector<int> ans = ob.findUnion(arr1, arr2, n, m);
    for (int i : ans) cout << i << ' ';
    cout << endl;
    
    return 0;
}
