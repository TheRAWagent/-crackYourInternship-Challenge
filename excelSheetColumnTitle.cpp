class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s;
        while(columnNumber>0)
        {
            if(columnNumber%26)
            {
                s.insert(s.begin(),columnNumber%26+64);
                columnNumber=(columnNumber/26);
            }
            else
            {
                s.insert(s.begin(),'Z');
                columnNumber=(columnNumber/26-1);
            }
        }
        return s;
    }
};