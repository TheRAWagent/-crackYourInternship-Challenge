class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        if(nums.size()==1)return nums[0]==k;
        int count=0;
        unordered_map<int,int> m;
        long long sum=0;
        for(auto &i:nums)
        {
            sum+=i;
            if(sum==k)count++;
            if(m[sum-k]>0)count+=(m[sum-k]);
            m[sum]++;
        }
        return count;
    }
};