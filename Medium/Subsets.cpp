# Backtracking Solution

class Solution {
public:
    void solve(int n, vector<int> &s, vector<vector<int>> &res, vector<int> nums)
    {
        if(n<0)
        {
            res.push_back(s);
            return;
        }
        s.push_back(nums[n]);
        solve(n-1,s,res,nums);
        s.pop_back();
        solve(n-1,s,res,nums);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> temp;
        vector<vector<int>> res;
        solve(n,temp,res,nums);
        return res; 
    }
};