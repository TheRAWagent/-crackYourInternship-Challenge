class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        nums.insert(nums.begin(),0);
        unordered_map<int,int> m;
        for(int i=1;i<nums.size();i++)
        {
            if(m[target-nums[i]]>0)
                return vector<int>{i-1,m[target-nums[i]]-1};
            else
                m[nums[i]]=i;
        }
        return vector<int>{};
    }
};