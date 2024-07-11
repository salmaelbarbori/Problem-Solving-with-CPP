class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int cnt = 0;
        int lastG = 0, lastP = 0, lastM = 0;

        for (int i = 0; i < garbage.size(); ++i) {
            cnt += count(garbage[i].begin(), garbage[i].end(), 'G');
            if (garbage[i].find('G') != string::npos) lastG = i;
        }

        for (int i = 0; i < garbage.size(); ++i) {
            cnt += count(garbage[i].begin(), garbage[i].end(), 'P');
            if (garbage[i].find('P') != string::npos) lastP = i;
        }

        for (int i = 0; i < garbage.size(); ++i) {
            cnt += count(garbage[i].begin(), garbage[i].end(), 'M');
            if (garbage[i].find('M') != string::npos) lastM = i;
        }

        for (int i = 1; i <= lastG; ++i) {
            cnt += travel[i - 1];
        }

        for (int i = 1; i <= lastP; ++i) {
            cnt += travel[i - 1];
        }

        for (int i = 1; i <= lastM; ++i) {
            cnt += travel[i - 1];
        }

        return cnt;
        
    }
};
