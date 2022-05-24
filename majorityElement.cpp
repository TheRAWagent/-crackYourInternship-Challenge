class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> x;
        for(auto &i:nums)
            x[i]++;
        return (max_element(x.begin(),x.end(),[](auto &x,auto &y){return x.second<y.second;}))->first;
    }
};