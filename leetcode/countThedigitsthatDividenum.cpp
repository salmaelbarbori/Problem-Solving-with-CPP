class Solution {
public:
    int countDigits(int num) {
        vector<int> v;
        int temp = num, cnt=0;
        while(temp!=0)
        {
            v.push_back(temp%10);
            temp = temp/10;
        }
        for (auto i = 0; i < v.size(); i++)
        {
            if(num%v[i]==0)
                cnt++;
        }
        return cnt;
    }
};
