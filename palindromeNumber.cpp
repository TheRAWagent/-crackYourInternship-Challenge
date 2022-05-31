class Solution {
public:
    bool isPalindrome(int x) {
        long long int y=x;
        long long int z=0;
        while(y>0)
        {
            z=z*10+y%10;
            y=y/10;
        }
        return x==z;
    }
};