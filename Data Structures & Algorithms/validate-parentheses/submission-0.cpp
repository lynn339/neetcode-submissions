class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        unordered_map<char, char> pairs
        {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for(char c : s)
        {
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else if(pairs.count(c))
            {
                if(st.empty())
                {
                    return false;
                }
                if(st.top()!= pairs[c])
                {
                    return false;
                }
                st.pop();
            }   
        }
        return st.empty();
        
    }
};
