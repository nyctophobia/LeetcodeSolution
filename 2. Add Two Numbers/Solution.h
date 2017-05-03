/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(-1);
        ListNode* tail = &dummy;
        ListNode* node = NULL;

        int carry = 0;

        for(ListNode *ptr_a = l1, *ptr_b = l2;
        	ptr_a != NULL || ptr_b != NULL;
        	ptr_a = (ptr_a == NULL ? NULL : ptr_a->next),
        	ptr_b = (ptr_b == NULL ? NULL : ptr_b->next))
        {
        	auto a = (ptr_a == NULL ? 0 : ptr_a->val);
        	auto b = (ptr_b == NULL ? 0 : ptr_b->val);
        	auto sum = (a + b + carry) % 10;
        	carry = (a + b + carry >= 10 ? 1 : 0);
        	node = new ListNode(sum);
        	tail->next = node;
        	tail = node;
        }

        if(carry > 0)
        	tail->next = new ListNode(1);

        return dummy.next;
    }
};