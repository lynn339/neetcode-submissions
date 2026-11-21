class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++)
        {
            count[s[i] - 'a']++;
            count[t[i]-'a']--;
        }
        for(int j = 0; j < 26; j++)
        {
            if(count[j] != 0)
            {
                return false;
            }
        }
        return true;
        

        
        
    }
};
