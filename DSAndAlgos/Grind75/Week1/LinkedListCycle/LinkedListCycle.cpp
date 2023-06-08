struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head)
{
  if (head == nullptr)
    return false;

  ListNode* slow = head;
  ListNode* fast = head;

  // If either of the node->next is nullptr we know there is no cycle and we return false
  while (slow->next != nullptr & fast->next->next != nullptr)
  {

    // Make slow go one node by one 
    slow = slow->next;

    // Fast node goes two nodes at a time
    fast = fast->next->next;

    // We imagine a cycled list as a circle, if the fast node goes around the circle fully
    // and catches up to the slow one we know there is a cycle. 
    if (fast == slow)
      return true;
  }
  return false;

  //Floyd's Tortoise and Hare algorithm
}
