class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        for (int num : arr) {
            countMap[num]++;
        }
        
        unordered_set<int> freqSet;
        for (auto& pair : countMap) {
            if (!freqSet.insert(pair.second).second) {
                return false;
            }
        }
        
        return true;
    }
};