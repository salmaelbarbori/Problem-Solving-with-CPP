class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> result;
        for(auto i = 0; i < nums.size();i++)
            result[nums[i]]++;

        //int sum = 0;
        vector<int> r;
        //auto it1 = result.begin(), it2 = result.begin();
        /*while (it1 != result.end()) 
        {   
            int sum = 0;
            it2 = result.begin();
            while (it2 != result.end())
            {
                if (it1->first > it2->first)
                    sum+= it2->second;
                ++it2;
            }
            r.push_back(sum);
            ++it1;
        }
        for (size_t i = r.size(); i < nums.size(); ++i) {
            r.push_back(0);
        }*/

        for (auto num : nums) {
            int sum = 0;
            for (auto it = result.begin(); it != result.find(num); ++it) {
                sum += it->second;
            }
            r.push_back(sum);
        }
        return r;
    }
};
