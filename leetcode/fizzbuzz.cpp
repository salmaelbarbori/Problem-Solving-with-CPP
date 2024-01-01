class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> tab= {};
        for (auto i = 1; i<=n;i++)
        {
            if (i < 3)
                tab.push_back(to_string(i));
            else if (i % 3 == 0 & i % 5 == 0)
                tab.push_back("FizzBuzz");
            else if (i % 3 == 0)
                tab.push_back("Fizz");
            else if (i % 5 == 0)
                tab.push_back("Buzz");
            else
                tab.push_back(to_string(i));
        }
        return tab;
    }
};
