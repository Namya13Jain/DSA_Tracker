//Adding an elemnt at the first of the Linked List
//Basically, inserting an element at the start of the linked list

Node *addAtFirst(Node *head,int x)
{ 
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    head = temp;
    
    return head;
}
