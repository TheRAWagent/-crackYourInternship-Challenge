/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* HEADa=headA,*HEADb=headB;
        bool flag=false;
        vector<ListNode*> v1,v2;
        while(HEADa!=nullptr)
        {
            v1.push_back(HEADa);
            HEADa=HEADa->next;
        }
        while(HEADb!=nullptr)
        {
            v2.push_back(HEADb);
            HEADb=HEADb->next;
        }
        int it1=v1.size()-1,it2=v2.size()-1;
        if(v1[it1]!=v2[it2])return nullptr;
        while(it1>=0 && it2>=0)
        {
            if(v1[it1]!=v2[it2])
            {
                return v1[it1+1];
            }
            else
            {
                it1--;
                it2--;
            }
        }
        it1++;
        it2++;
        return v1[it1];
    }
};