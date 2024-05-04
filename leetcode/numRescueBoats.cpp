class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int cnt = 0,r = people.size() - 1, l = 0;
        sort(people.begin(), people.end());
        while (l<=r)
        {
            if(people[r]+people[l]<=limit)
                l++;
            r--;
            cnt++;
        }
        return (cnt);
        
    }
};
