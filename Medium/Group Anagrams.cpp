class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> v;
        string j;
        for(int i=0;i<strs.size();i++)
        {
            j = strs[i];
            sort(j.begin(),j.end());
            m[j].push_back(strs[i]);
        }
        for(auto x=m.begin();x!=m.end();x++)
        {
            v.push_back(x->second);
        }
        return v;
    }
};