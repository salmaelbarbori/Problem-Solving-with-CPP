class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> occurence;
        for (auto i= 0; i < arr.size();i++)
            occurence[arr[i]]++;
        /*for (auto i = occurence.begin(); i!= occurence.end();++i)
        {
          for (auto j = occurence.begin(); j!= occurence.end();++j)
          {
            if (i->second == j->second)
                return false;
          }  
        }
        return true;*/

        unordered_set<int> seenCounts;
        for (auto pair : occurence) {
            if (!seenCounts.insert(pair.second).second) {
                return false;
            }
        }

        return true;
    }
};
