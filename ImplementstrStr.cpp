class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle=="")
            return 0;
        for(auto it=haystack.begin();it<haystack.end();++it)
        {
            if(*it==needle[0])
            {
                if(distance(it,haystack.end())<needle.length())
                    return -1;
                string s(it,it+needle.length());
                if(s==needle)
                    return distance(haystack.begin(),it);
            }
        }
        return -1;
    }
};