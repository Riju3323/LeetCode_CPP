class Solution {
public:
    void recsolve(vector<vector<int>>& val, vector<int>& temp, int n, int k, int sum)
    {
        if(temp.size()==k)
        {
            val.push_back(temp);
            return;
        }
        if(temp.size()>k || sum>n)
        {
            return;
        }
        temp.push_back(sum);
        recsolve(val,temp,n,k,sum+1);
        temp.pop_back();
        recsolve(val,temp,n,k,sum+1);


    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> temp;
        recsolve(v,temp,n,k,1);
        return v;
    }
};