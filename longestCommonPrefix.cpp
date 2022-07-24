class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char c;
        int x=INT_MAX;
        string s="";
        for(auto &i:strs)
            x= (x<=i.length())?x:i.length();
        for(int i=0;i<x;i++)
        {
            c=strs[0][i];
            for(int j=1;j<strs.size();j++)
                if(i==strs[j].length() || strs[j][i]!=c)return s;
            s.push_back(c);
        }
        return s;
    }
};