/*
Subsets
by N.H.J.
2021.3.31
ver.1
*/

class Solution {
public:
    vector<int> t;
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {

    int n = nums.size();
        for (int mask = 0; mask < (1 << n); ++mask) {
            t.clear();
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    t.push_back(nums[i]);
                }
            }
            ans.push_back(t);
        }
    return ans;

    }
};
