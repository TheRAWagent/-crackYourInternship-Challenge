class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 ||(i>0 && nums[i]!=nums[i-1]))
            {
                int lo=i+1,hi=nums.size()-1;
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi]==0-nums[i])
                    {
                        v.push_back(vector<int>{nums[i],nums[lo],nums[hi]});
                        while(lo<hi && nums[lo]==nums[lo+1])lo++;
                        while(lo<hi && nums[hi]==nums[hi-1])hi--;
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]>0-nums[i])hi--;
                    else lo++;
                }
            }
        }
        return v;
    }
};