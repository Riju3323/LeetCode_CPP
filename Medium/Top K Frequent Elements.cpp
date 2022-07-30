class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        vector<vector<int>> v(nums.size()+1);
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
           v[x.second].push_back(x.first);
        }
        for(int i=nums.size();i>=0;i--)
        {
            if(res.size()>=k)
            {
                break;
            }
            if(!v[i].empty())
            {
                res.insert(res.end(),v[i].begin(),v[i].end());
            }
        }
        return res;
    }
};