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
    ListNode* reverseList(ListNode* head) {
        // if(head==NULL || head->next==NULL)
        // {
        //     return head;
        // }
        // ListNode* newHead = reverseList(head->next);
        // head->next->next=head;
        // head->next=NULL;
        // return newHead;
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* after;
        while(temp)
        {
            after=temp->next;
            temp->next=prev;
            prev=temp;
            temp=after;
        }
        return prev;
    }
};