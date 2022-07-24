class Solution {
public:
    bool isPalindrome(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        bool flag=false;
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                char c=s[i];
                s.erase(s.begin()+i);
                if(isPalindrome(s))return true;
                s.insert(s.begin()+i,c);
                c=s[j];
                s.erase(s.begin()+j);
                if(isPalindrome(s))return true;
                else return false;
            }
            i++;
            j--;
        }
        return true;
    }
};