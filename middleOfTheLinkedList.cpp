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
    ListNode* middleNode(ListNode* head) {
        ListNode* h1=head;
        int count=0;
        while(h1->next!=NULL)
        {
            h1=h1->next;
            count++;
        }
        if(count%2)
            count=count/2+1;
        else
            count/=2;
        for(int i=1;i<=count;i++)
            head=head->next;
        return head;
    }
};