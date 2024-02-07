class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freqMap;
        priority_queue<pair<int, char>> pq;
        for (char c : s)
            freqMap[c]++;
        for (auto& entry : freqMap)
            pq.push({entry.second, entry.first});
        string result = "";
        while (!pq.empty()) {
            auto [freq, ch] = pq.top();
            pq.pop();
            result.append(freq, ch);
        }

        return result;
    }
};
