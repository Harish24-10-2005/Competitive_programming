class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>v(nums.size()+1,-1);
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]=1;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==-1)
            {
                return i;
            }
        }
        return 0;
    }
};