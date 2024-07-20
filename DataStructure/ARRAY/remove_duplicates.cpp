#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0; // Handle empty vector case
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    cout << endl << "No. of Unique Numbers: " << i + 1;
    return i + 1;
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 3, 4, 3, 12, 12};
    
    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    sort(nums.begin(), nums.end());

    int n = remove_duplicates(nums);
    
    cout << "\nVector after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
