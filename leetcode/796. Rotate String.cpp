class Solution {
public:
    bool rotateString(string s, string goal) {
     if (s.length() != goal.length())
         return false;
    string tmp = s+s;    
        return tmp.find(goal)!=string::npos;
    }
};
