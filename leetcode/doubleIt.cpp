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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp =head;
        int n = 0;
        while (temp != nullptr)
        {
            n = n*10 + temp->val;
            temp = temp->next;
        }
        
        int r = n*2;
        int reversed = 0;
        while (r != 0) {
            reversed = reversed * 10 + r % 10;
            r = r / 10;
        }
        
        ListNode* result = new ListNode(reversed % 10);
        reversed /= 10;
        ListNode* temp_result = result;
        while (reversed != 0)
        {
            temp_result->next = new ListNode(reversed % 10);
            reversed /= 10;
            temp_result = temp_result->next;
        }
        return result;
        
    }
};
