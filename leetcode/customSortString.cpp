class Solution {
public:
    string customSortString(string order, string s) {
     sort(s.begin(), s.end(), [&](char a, char b) {
            return order.find(a) < order.find(b);
        });
        return s;
     /*   string result;
        result.resize(s.length());
        int j = 0;
      for (auto i =0; i < order.length(); i++)
      {
          if (find(s.begin(), s.end(), order[i]) != s.end())
          {
              result[j] = order[i];
              j++;
          }  
      }
      while (j < s.length())
      {
          result[j] = s[j];
          j++;
      }
      return result;*/
    }
};
