class Solution {
public:
    int minMoves(vector<int>& nums) {
        int x=*min_element(nums.begin(),nums.end());
        int moves=0;
        for(auto &i:nums)
            moves+=(i-x);
        return moves;
    }
};