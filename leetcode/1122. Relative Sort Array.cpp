class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> m;
        for(auto i = 0; i < arr1.size(); ++i)
            m[arr1[i]]++;
        
        vector<int> result;
        for (int num : arr2) {
            while (m[num] > 0) {
                result.push_back(num);
                m[num]--;
            }
        }
        
        vector<int> remainingElements;
        for (int num : arr1) {
            if (m[num] > 0) {
                remainingElements.push_back(num);
                m[num]--;
            }
        }
        
        sort(remainingElements.begin(), remainingElements.end());

        result.insert(result.end(), remainingElements.begin(), remainingElements.end());

        return result;
        
        

        
    }
};
