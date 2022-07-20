class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char> a,b;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                if(a.empty())continue;
                else a.pop();
            }
            else a.push(s[i]);
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                if(b.empty())continue;
                else b.pop();
            }
            else b.push(t[i]);
        }
        return b==a;
    }
};