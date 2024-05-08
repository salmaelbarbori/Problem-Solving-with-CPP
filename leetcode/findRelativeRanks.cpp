class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> result(score.size());
        vector<int> temp(score.begin(), score.end());
        sort(temp.begin(), temp.end(), greater<int>());
        for (int i = 0; i < score.size(); i++) {
            if (score[i] == temp[0]) {
                result[i] = "Gold Medal";
            } else if (score[i] == temp[1]) {
                result[i] = "Silver Medal";
            } else if (score[i] == temp[2]) {
                result[i] = "Bronze Medal";
            } else {
                result[i] = to_string(distance(temp.begin(), find(temp.begin(), temp.end(), score[i])) + 1);
            }
        }
        return result;
    }
};
