class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> v(26,0);
        char c;
        int z;
        int k = s.length();
        for(int i=0;i<k;i++)
        {
            z = s[i]-'a';
            v[z]++;
            if(v[z]==2)
            {
                c = s[i];
                break;
            }
        }
        return c;
    }
};