//Leet-237: Delete Node in a Linked List

//node is standing at the node in linked list
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};