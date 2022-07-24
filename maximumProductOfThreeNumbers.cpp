class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=nums.size()-1;
        return max(max(nums[x]*nums[x-1]*nums[x-2],nums[0]*nums[1]*nums[2]),max(nums[0]*nums[1]*nums[x],nums[0]*nums[x-1]*nums[x]));
    }
};