#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                j = i;
                break;
            }
        }
        if(j != -1 && nums.size() > 1) {
            for(int i = j + 1; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    std::swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    }
    void moveZ_bruteforce(vector<int>& nums)
    {
        vector<int>temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                temp.push_back(nums[i]);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            nums[i]=temp[i];
        }
        for(int i=temp.size();i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums1 = {0, 1, 0, 3, 12};
    cout << "Original vector: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << std::endl;
    cout << "Original vector Nums 1: ";
    for(int num : nums1) {
        cout << num << " ";
    }
    cout << std::endl;
    Solution sol;
    sol.moveZeroes(nums);
    sol.moveZ_bruteforce(nums1);
    cout << "Vector after moving zeroes: ";
    for(int num : nums) {
        std::cout << num << " ";
    }
    cout << std::endl;
    cout << "Vector after moving zeroes Nums 1: ";
    for(int num : nums1) {
        std::cout << num << " ";
    }
    cout << std::endl;
    return 0;
}
