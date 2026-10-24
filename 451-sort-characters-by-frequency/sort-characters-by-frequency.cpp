class Solution {
public:
    string frequencySort(string s) {
        
        string str="";

        unordered_map<char,int> mp;

        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }

        while(mp.size())
        {
            int maxi=0;
            char key;

            for(auto it: mp)
            {
                if(it.second>maxi)
                {
                    maxi=it.second;
                    key = it.first;
                }
            }

            while(maxi)
            {
                str.push_back(key);
                maxi--;
            }

            mp.erase(key);
        }

        return str;
    }
};