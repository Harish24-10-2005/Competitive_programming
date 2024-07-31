#include <vector>
#include <unordered_map>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	vector<pair<int, int>> res;
    unordered_map<int, int> mpp;
	for (int i = 0; i < n; i++) {
        int num = arr[i];
        int needMore = target - num;
        if (mpp.find(needMore) != mpp.end() && mpp[needMore] > 0) {
            res.push_back({needMore, num});
            mpp[needMore]--; 
            if (mpp[needMore] == 0) {
                mpp.erase(needMore);
            }
        } else {
            mpp[num]++;
        }
    }

    if (res.empty()) {
        res.push_back({-1, -1});
    }

    return res;
}
