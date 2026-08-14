class Solution {
public:


    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> freq;
        unordered_set<int> occurrences;

        for (int x : arr) {
            freq[x]++;
        }

        for (auto& [x, count] : freq) {
            if (occurrences.count(count)) {
                return false;
            }
            occurrences.insert(count);
        }

        return true;
    }
};