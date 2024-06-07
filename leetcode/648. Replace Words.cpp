class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        vector<string> v;
        string c;
        for (auto i = 0; i<sentence.size(); ++i)
        {
            while (sentence[i] >= 'a' && sentence[i] <='z')
            {    c+=sentence[i];i++;}
            v.push_back(c);
        }
        int j = 0;
        for (auto i = 0; i < v.size(); ++i)
        {
            if (find(v.begin(), v.end(), dictionary[j]) != v.end())
            {
                v[i] = dictionary[j];
                j++;
            }
        }
        string result=" ";
        for(auto v1:v)
            result+=v1;
        return result;
    }
};
