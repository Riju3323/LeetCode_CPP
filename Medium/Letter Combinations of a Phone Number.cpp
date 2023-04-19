class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> car = {{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
        vector<string> ans;
        int l = digits.length();
        string s;
        stack<string> steck;
        steck.push("");
        while(!steck.empty())
        {
            s = steck.top();
            steck.pop();
            if(s.length() == l)
            {
                ans.push_back(s);
            }
            else {
                for( auto i : car[digits[s.length()] - '0'])
                {
                    steck.push(s + i);
                }
            }
        }
        if(digits == "")
        {
            ans = {};
            return ans;
        }
        return ans;
    }
};