class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0; 
        int r = 0; 
        long long sum = 0; 
        int min_len = INT_MAX; 
        
        while (r < nums.size()) {
            sum += nums[r];
            r++;
            
            while (sum >= target) {
                min_len = std::min(min_len, r - l);
                sum -= nums[l];
                l++;
            }
        }
        
        return min_len == INT_MAX ? 0 : min_len;
    }
};