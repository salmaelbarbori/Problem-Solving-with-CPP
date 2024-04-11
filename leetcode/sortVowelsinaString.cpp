class Solution {
public:
    string sortVowels(string s) {
        vector<char> c;
        for (auto s1:s)
        {
            if (s1=='a'|| s1== 'e'|| s1== 'i'|| s1== 'o'|| s1== 'u'||s1== 'A'|| s1== 'E'|| s1=='I'||                    s1== 'O'|| s1== 'U')
                c.push_back(s1);
        }
        sort(c.begin(), c.end());
        int j = 0;
        for (auto i = 0; i < s.length(); i++)
        {
            if (s[i]=='a'|| s[i]== 'e'|| s[i]== 'i'|| s[i]== 'o'|| s[i]== 'u'||s[i]== 'A'|| s[i]==                 'E'|| s[i]=='I'||                    s[i]== 'O'|| s[i]== 'U')
            {
                s[i] = c[j];
                j++;
            }
        }
        return s;
        
    }
};
