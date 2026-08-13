class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        vector<int> count(total + 1, 0);

        for (auto& row : grid) {
            for (int val : row) {
                count[val]++;
            }
        }

        int a = -1, b = -1;
        for (int num = 1; num <= total; num++) {
            if (count[num] == 2) a = num;
            if (count[num] == 0) b = num;
        }

        return {a, b};
    }
};