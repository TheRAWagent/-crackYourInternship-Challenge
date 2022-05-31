class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)return false;
        if(n%2 && n!=1)return false;
        if(n==1)return true;
        return isPowerOfTwo(n/2);
    }
};