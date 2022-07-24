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
class Solution{
    public:
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* L1=l1,*L2=l2;
    int a=0,b=0;
    while(L1!=nullptr)
    {
        L1=L1->next;
        a++;
    }
    while(L2!=nullptr)
    {
        L2=L2->next;
        b++;
    }
    if(a>=b)
    {
        L1=l1;
        while(l2->next!=nullptr)
        {
            L1->val=L1->val+l2->val;
            L1=L1->next;
            l2=l2->next;
        }
        L1->val=L1->val+l2->val;
        L1=l1;
        
        while(L1!=nullptr)
        {
            if(L1->val>=10)
            {
                if(L1->next!=nullptr)
                {
                    L1->val-=10;
                    L1->next->val++;
                }
                else
                {
                    ListNode* x = new ListNode(1,nullptr);
                    L1->val-=10;
                    L1->next=x;
                }
            }
            L1=L1->next;
        }
        return l1;
    }
    else
    {
        L2=l2;
        while(l1->next!=nullptr)
        {
            L2->val=L2->val+l1->val;
            L2=L2->next;
            l1=l1->next;
        }
        L2->val=L2->val+l1->val;
        L2=l2;
        while(L2!=nullptr)
        {
            if(L2->val>=10)
            {
                if(L2->next!=nullptr)
                {
                    L2->val-=10;
                    L2->next->val++;
                }
                else
                {
                    ListNode* x = new ListNode(1,nullptr);
                    L2->val-=10;
                    L2->next=x;
                }
            }
            L2=L2->next;
        }
        return l2;
    }
    }
};