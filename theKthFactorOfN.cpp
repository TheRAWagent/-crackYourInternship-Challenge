class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factors={1};
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
                factors.push_back(i);
        int p=factors.size();
        if(floor(sqrt(n))==ceil(sqrt(n)))
            p--;
        for(int i=p-1;i>0;i--)
            factors.push_back(n/factors[i]);
        factors.push_back(n);
        return (factors.size()>=k)?factors[k-1]:-1;
    }
};