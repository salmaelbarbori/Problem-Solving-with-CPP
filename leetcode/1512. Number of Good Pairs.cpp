class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> peer;
        int good_peer = 0;
        for (auto i = 0; i < nums.size(); i++)
            peer[nums[i]]++;
        map<int, int>::iterator it = peer.begin();
        while (it != peer.end()) {
            good_peer += it->second*(it->second - 1 ) / 2;
            ++it;
        }
        return good_peer;
    }
};
