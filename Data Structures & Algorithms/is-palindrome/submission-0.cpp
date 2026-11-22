class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int count = s.size()-1;
        while(i < count)
        {
            while (i < count && !isalnum(s[i])) i++;
            while (i < count && !isalnum(s[count])) count--;
            
            if(tolower(s[i]) != tolower(s[count]))
            {
                return false;
            }
            i++;
            count--;
        }
        return true;   
       
    }
    
};
