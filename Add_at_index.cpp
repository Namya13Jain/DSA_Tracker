//Adding an element at a particular index in the Linked List
void add_at_index(int idx, int val){
  if(idx<0){
   cout<< "invalid index" << endl;
  }
  else if(idx == 0){
    //insert at beginning 
    Node* temp = new Node();
    temp->data = val;
    temp->next = head;
    head = temp;
  }
  else if(idx == size){
    //insert at end
    Node * temp = head;
    Node *nnode = new Node();
    nnode->data = val;
    nnode->next = NULL;
    while(temp->next != NULL){
         temp = temp->next;
    }
    temp->next = nnode;
    nnode->next = NULL;
  }
  else{
    //insert in middle 
    Node* nnode = new Node();
    nnode->data = val;
    Node* temp = head;
    for(int i = 0; i < idx-1; i++){
        temp = temp->next;
    }
    nnode->next = temp->next;
    temp->next = nnode;
  }  
}
