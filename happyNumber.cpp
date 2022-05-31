class Solution {
public:
    bool isHappy(int n) {
        long long k=n;
        while(k>9)
        {
            string s=to_string(k);
            k=0;
            for(auto &i:s)
            {
                k+=((i-48)*(i-48));
            }
        }
        return k==1 || k==7;
    }
};