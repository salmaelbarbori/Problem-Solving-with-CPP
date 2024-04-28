class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result(pref.size(), pref[0]);
        int p = pref[0];
        for(auto i = 1; i < pref.size(); i++)
        {
            result[i] = p^pref[i];
            p = pref[i];
        }
        return result;
    }
};
