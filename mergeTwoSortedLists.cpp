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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return list1;
        else if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        ListNode* head = new ListNode();
        ListNode* ptr=head;
        
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<=list2->val)
            {
                ListNode* temp = new ListNode();
                temp->val=list1->val;
                ptr->next=temp;
                ptr=ptr->next;
                list1=list1->next;
            }
            else
            {
                ListNode* temp = new ListNode();
                temp->val=list2->val;
                ptr->next=temp;
                ptr=ptr->next;
                list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            while(list1!=NULL)
            {
                ListNode* temp = new ListNode();
                temp->val=list1->val;
                ptr->next=temp;
                ptr=ptr->next;
                list1=list1->next;
            }
        }
        else if(list2!=NULL)
        {
            while(list2!=NULL)
            {
                ListNode* temp=new ListNode();
                temp->val=list2->val;
                ptr->next=temp;
                ptr=ptr->next;
                list2=list2->next;
            }
        }
        return head->next;
        
    }
};