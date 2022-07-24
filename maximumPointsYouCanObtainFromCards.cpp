class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size(),sum=0,minSum=INT_MAX;
        for(int i=0;i<n-k;i++)
            sum+=cardPoints[i];
        minSum=min(sum,minSum);
        for(int i=n-k;i<cardPoints.size();i++)
        {
            sum=sum+cardPoints[i]-cardPoints[i-n+k];
            minSum=min(sum,minSum);
        }
        return accumulate(cardPoints.begin(),cardPoints.end(),0)-minSum;
    }
};