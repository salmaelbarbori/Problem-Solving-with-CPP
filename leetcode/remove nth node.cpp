class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;

        ListNode* temp = head;

        while (temp != NULL) {
            temp = temp->next;
            cnt++;
        }
        temp = head;

        if (cnt == n) {
            head = head->next;
            delete temp;
            return head;
        }

        for (int i = 0; i < cnt - n - 1; i++) {
            temp = temp->next;
        }

        ListNode* toRemove = temp->next;
        temp->next = toRemove->next;
        delete toRemove;

        return head;
    }
};
