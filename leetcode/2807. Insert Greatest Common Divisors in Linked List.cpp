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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = head;
        while(ans->next != nullptr)
        {
            ListNode* tmp = ans->next;
            int gcd_value = __gcd(ans->val, ans->next->val);
            ans->next = new ListNode(gcd_value, tmp);
            ans = tmp;
        }
        return head;
    }
};
