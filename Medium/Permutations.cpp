class Solution {
public:
    void recsolve(vector<vector<int>> &res, vector<int> &temp, vector<int>& nums,int j)
    {
        if(j==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i = j;i<nums.size();i++)
        {    
        swap(nums[j],nums[i]);
        recsolve(res,temp,nums,j+1);
        swap(nums[j],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        recsolve(res,temp,nums,0);
        return res;
    }
};