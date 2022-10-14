/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head(0), *cur = &head;
        int temp = 0;

        while(l1 || l2 || temp) {
            if (l1) {
                temp += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                temp += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(temp%10);
            temp /= 10;
            cur = cur->next;
        }
        return head.next;
    }
};