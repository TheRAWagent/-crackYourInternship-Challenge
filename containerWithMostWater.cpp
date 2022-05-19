class Solution {
public:
    int maxArea(vector<int>& height) {
        int r=height.size()-1; 
    int l=0;
    int Max=0;
    while(l<r){
        int rh = height[r];
        int lh= height[l];
        int min_h=min(rh,lh);
         Max=max(Max,min_h*(r-l));
        
        if(lh<rh) l++;
        else r--;
    }
    return Max;
    }
};