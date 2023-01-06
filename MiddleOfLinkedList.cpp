//Find the middle element of the linked list
Node *middleLL(Node *head)
{
  Node *fast = head;
  Node *slow = head;
  
  while(fast && fast->next)
  {  
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}
