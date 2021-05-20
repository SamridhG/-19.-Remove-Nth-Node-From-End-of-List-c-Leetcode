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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0,del;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        del=size-n;
        temp=head;
        if(del!=0)
        {
        while(del!=1)
        {
            temp=temp->next;
            del--;
        }
        temp->next=temp->next->next;
        return head;
        }
        else
        {
            head=head->next;
            return head;
        }
    }
