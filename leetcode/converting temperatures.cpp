class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> arr;
        arr.push_back(celsius + 273.15);
        arr.push_back(celsius*1.8 + 32);
        return arr;
    }
};
