class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    map<char, int> jew;
    map<char, int> sto;
    for (auto i = 0; i < jewels.length(); i++)
        jew[jewels[i]]++;

    for (auto i = 0; i < stones.size(); i++)
        sto[stones[i]]++;
    
    int sum = 0;
    auto it1 = sto.begin();
    auto it2 = jew.begin();

    while(it1 != sto.end())
    {
        auto it2 = jew.begin();
        while (it2 != jew.end())
        {
            if (it1->first == it2->first)
                sum += it1->second;
            cout << sum << endl;
            ++it2;
        }
        ++it1;
    }
    return sum;
        
    }
};
