class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<char,int> mp;

        char c;

        for(int i=0;i<s.length();i++)
        {
            char ch= s[i];

            mp[ch]++;

            if(mp[ch]==2)
            {
                c=ch;
                break;
            }
        }


        return c;       
    }
};