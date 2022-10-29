class Solution {
public:
    void recsolve(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, int i)
    {
        if(i>=nums.size())
        {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        recsolve(res,nums,temp,i+1);
        temp.pop_back();
        recsolve(res,nums,temp,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        recsolve(res,nums,temp,0);
        return res;
    }
};