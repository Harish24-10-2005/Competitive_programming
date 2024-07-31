class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        long long prod=1;

        for(int i=0;i<nums.size();i++)
        {
          prod*=nums[i];
          maxi=max(static_cast<int>(prod),maxi);
          if(prod==0)
           prod=1;
          if(prod > INT_MAX || prod < INT_MIN) {
                    break;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];

          maxi=max(static_cast<int>(prod),maxi);
          if(prod==0)
           prod=1;
          if(prod > INT_MAX || prod < INT_MIN) {
                    break;
            }
        }
        return maxi;
    }
};
   