/**206. Reverse Linked List
	Reverse a singly linked list.
	Example:
	Input: 1->2->3->4->5->NULL
	Output: 5->4->3->2->1->NULL
	Follow up:
	A linked list can be reversed either iteratively or recursively. Could you implement both?
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    	if(!head || head->next == nullptr) return head;
        ListNode* prev = head; // prev now points to wherever "head" is pointing to.
        ListNode* curr = prev->next; 
        while (curr) {
            prev->next = curr->next;
            curr->next = head;
            head = curr;
            curr = prev->next;
        }
        return head;   
    }
};