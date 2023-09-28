class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
         ListNode* prev = NULL;
         ListNode* curr = head;
         while(curr != NULL)    //Iterative Approach
         {
             ListNode* forward = curr->next;
             curr->next = prev;
             prev = curr;
             curr = forward;
         }
         return prev;
        
    }
};
