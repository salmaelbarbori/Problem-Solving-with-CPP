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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;
        
        vector<int> arr;
        ListNode* current;
        current= head;
        int i, j;
        while (current != NULL)
        {
            arr.push_back(current->val);
            current = current->next;
        }
        for (i = 0, j = arr.size() - 1;i < j; i++, j-- )
        {
            if (arr[i] != arr[j])
                return false;
        }
        return true;
    }
};
