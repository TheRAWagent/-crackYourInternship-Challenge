/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* k = new ListNode(),*p=k;
        if(lists.size()==0)
            return nullptr;
        else
        {
            for(int i=-10000;i<=1e4;i++)
            {
                for(auto &j:lists)
                {
                    if(j!=nullptr && j->val==i)
                    {
                        while(j && j->val==i)
                        {
                            ListNode* temp = new ListNode(j->val);
                            p->next=temp;
                            p=p->next;
                            j=j->next;
                        }
                    }
                    
                }
            }
            return k->next;
        }
        return nullptr;
    }
};