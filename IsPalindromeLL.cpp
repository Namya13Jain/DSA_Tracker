//check whether the linked list is palindrome
 ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *prev = NULL, *curr = head , *nex = head->next;
        while(curr!=NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = nex;
            if(nex) nex = nex->next;
        }
        return prev;
    }
    ListNode* findMiddleLL(ListNode *head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode *slow=head,*fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    bool checkSameList(ListNode *head1,ListNode *head2)
    {
        while(head1!=NULL && head2!=NULL)
        {
            if(head1->val!=head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL) return true;
         ListNode *temp=head;
         ListNode *mid = findMiddleLL(temp);
        ListNode *head2 = reverseList(mid);
        return checkSameList(head,head2);
    }
