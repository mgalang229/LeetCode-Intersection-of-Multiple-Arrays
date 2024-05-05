class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int freq[1001];
        memset(freq, 0, sizeof(freq));
        for (vector<int>& num : nums) {
            for (int& x : num) {
                freq[x]++;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= 1000; i++) {
            if (freq[i] == nums.size()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
