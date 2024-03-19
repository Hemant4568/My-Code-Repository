class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
         unordered_map<char, int> taskFreq;
    for (char task : tasks) {
        taskFreq[task]++;
    }

    vector<int> frequencies;
    for (auto& pair : taskFreq) {
        frequencies.push_back(pair.second);
    }
    sort(frequencies.begin(), frequencies.end(), greater<int>());

    int maxFreq = frequencies[0];
    int numMaxFreqTasks = 1;
    for (int i = 1; i < frequencies.size(); ++i) {
        if (frequencies[i] == maxFreq) {
            numMaxFreqTasks++;
        } else {
            break;
        }
    }

    int minIntervals = (maxFreq - 1) * (n + 1) + numMaxFreqTasks;

    return max((int)tasks.size(), minIntervals);
    }
};