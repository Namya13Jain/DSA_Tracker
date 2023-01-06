//Revesing the Linked List
Node* reverseList(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        Node *prev = NULL, *curr = head , *nex = head->next;
        while(curr!=NULL)
        {
            curr->next = prev;
            prev = curr;
            curr = nex;
            if(nex) nex = nex->next;
        }
        return prev;
}
