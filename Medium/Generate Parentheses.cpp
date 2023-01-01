class Solution {
public:
    void genpar(int n, string s, int o, int c, int it, vector<string> &a){
        {
            if(it==2*n)
            {
                a.push_back(s);
                return;
            }
        }
        if(o<n)
        {
            genpar(n,s+'(',o+1,c,it+1,a);
        }
        if(c<o)
        {
            genpar(n,s+')',o,c+1,it+1,a);
        }
    }
    vector<string> generateParenthesis(int n) {
        int o=0,c=0,it=0;
        vector<string> res;
        string s = "" ;
        genpar(n,s,o,c,it,res);
        return res;
    }
};