class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int l = 0;
        int r = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        while(l<=r && top<=bottom)
        {
            for(int i=l;i<=r;i++)
            {
                res.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                res.push_back(matrix[i][r]);
            }
            r--;
            if(top<=bottom)
            {
                for(int i=r;i>=l;i--)
                {
                    res.push_back(matrix[bottom][i]);
                }
               bottom--;
            }
            if(l<=r)
            {
                for(int i=bottom;i>=top;i--)
                {
                    res.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return res;
        
    }
};