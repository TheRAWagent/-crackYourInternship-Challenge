class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a(nums.begin(),nums.end());
        int k=a.size(),n=nums.size();
        nums.clear();
        for(auto i:a)
            nums.push_back(i);
        return k;
    }
};