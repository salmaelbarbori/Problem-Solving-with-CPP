class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int t = 0;
        while (tickets[k] != 0) {
            if (tickets[k] > 0) {
                tickets[k]--;
                t++;
            }
            for (auto i = 0; i < tickets.size(); i++) {
                if (tickets[i] > 0 && i != k) {
                    t++;
                    tickets[i] = tickets[i] - 1;
                }
            }
        }
        return t;
    }
};
