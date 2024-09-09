class Solution {
public:
    string reformatDate(string date) {
    string day, month, year;
    year = date.substr(date.size() - 4);
    unordered_map<string, string> monthMap = {
        {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"}, {"Apr", "04"}, {"May",    "05"}, {"Jun", "06"},
        {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
    };
    month = monthMap[date.substr(date.size() - 8, 3)];
    day = date.substr(0, 2);
    if (!isdigit(day[1])) day = "0" + day.substr(0, 1);
    return year + "-" + month + "-" + day;
    }
};
