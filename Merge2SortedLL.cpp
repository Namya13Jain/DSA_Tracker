//Merging two sorted linked list
Node* mergeTwoLists(Node* head1, Node* head2) {
        if(head1==NULL) return head2;
        if(head2==NULL) return head1;
        //compare the data of head1 and head2
        if((head1->data) <= (head2->data)){
          head1->next = mergeTwoLists(head1->next,head2);
          return head1;
        }
          
        else {
          head2->next = mergeTwoLists(head1,head2->next);
          return head2;
        }
          
    }
