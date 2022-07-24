class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0 && nums.size()>1)return false;
        int x=0;
        for(int i=0;i<nums.size()-1;i++)
            if(x>=i)
                x=max(x,nums[i]+i);
        return x>=nums.size()-1;
    }
};