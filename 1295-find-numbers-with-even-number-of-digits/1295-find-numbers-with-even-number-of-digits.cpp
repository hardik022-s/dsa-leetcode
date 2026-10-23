class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int digits = 0;
            while (x > 0) {      // count digits
                digits++;
                x /= 10;
            }
            if (digits % 2 == 0) count++;
        }
        return count;
    }
};