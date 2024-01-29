class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head(0), *cur = &head;
        int val = 0;

        while(l1 || l2) {
            if (l1) val += l1->val;
            
            if (l2) val += l2->val;  
        
            cur->next = new ListNode(val%10);
            val /= 10;

            if (l1) l1 = l1->next;;
            if (l2) l2 = l2->next;
            
            cur = cur->next;
        }
        if (val == 1) cur->next = new ListNode(1);
        return head.next;
    }
};