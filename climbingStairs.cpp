class Solution {
public:
    int func(int n,vector<int> &Steps)
    {
        if(n==1 || n==0)return 1;
        if(Steps[n]!=0)return Steps[n];
        return Steps[n]=func(n-1,Steps)+func(n-2,Steps);
    }
    int climbStairs(int n) {
        vector<int> Steps(50,0);
        return func(n,Steps);
    }
};