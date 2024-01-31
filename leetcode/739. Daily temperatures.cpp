class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        stack<int> stack_;
        int j ;
        for (auto i = 0; i < temperatures.size();i++)
        {
            while(!stack_.empty() && temperatures[i] > temperatures[stack_.top()])
            {
                int ind = stack_.top();
                stack_.pop();
                answer[ind] = i - ind;
            }
            stack_.push(i);
        }
        return answer;
    }
};
