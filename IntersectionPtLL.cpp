int intersectLL(Node* head1, Node* head2){
   Node* temp1 = head1;
   Node* temp2 = head2;
   
   int diff = Math.abs(head1->size - head2->size);
   
   if(head1->size > head2->size){
      for(int i = 0; i< diff ; i++){
         temp1 = temp1->next;
      }
   }
   else{
      for(int i = 0; i< diff ; i++){
         temp2 = temp2->next;
      }
   }
   
   while(temp1!= temp2){
     temp1 = temp1->next;
     temp2 = temp2->next;
   }
   return temp1->data;
}
