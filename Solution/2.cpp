class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* cur = &dummy;
        ListNode** node1 = &l1;
        ListNode** node2 = &l2;
        
        int carry = 0;
        
        while (*node1 || *node2 || carry) {
            int sum = carry + (*node1 ? (*node1)->val : 0 ) + (*node2 ? (*node2)->val : 0);
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            carry = sum / 10;
            
            if (*node1) node1 = &(*node1)->next;
            if (*node2) node2 = &(*node2)->next;
        }
        return dummy.next;
    }
};