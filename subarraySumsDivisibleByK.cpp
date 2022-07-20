class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0,sum=0;
        unordered_map<int,int> m;
        m[0]++;
        for(auto &i:nums)
        {
            sum+=i;
            if(sum%k==0) m[0]++;
            else if(sum>=0) m[sum%k]++;
            else m[k+sum%k]++;
        }
        for(auto &i:m)
            count=count+((i.second*(i.second-1))/2);
        return count;
    }
};