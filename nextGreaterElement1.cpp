class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> m;
        for(int i=0;i<nums2.size();i++)
        {
            if(st.empty() || nums2[i]<st.top())st.push(nums2[i]);
            else
            {
                while(!st.empty() && st.top()<nums2[i])
                {
                    m[st.top()]=nums2[i];
                    st.pop();
                }
                st.push(nums2[i]);
            }
        }
        while(!st.empty())
        {
            m[st.top()]=-1;
            st.pop();
        }
        vector<int> v;
        for(auto &i:nums1)
            v.push_back(m[i]);
        return v;
    }
};