class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    vector<string> simplifiedFractions(int n) {
        vector<string> s;
        for(auto i = 1; i < n; i++)
        {
            for (auto j = i+1; j <= n; j++)
            {   
                if(gcd(i,j) == 1)
                {
                    string s1 = to_string(i)+ "/" + to_string(j);
                    s.push_back(s1);
                }
            }
        }
        return s;
    }   
};
