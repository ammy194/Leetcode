class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();

        if (n == 0) return;

        k = k % n;

        vector<int> temp(k);

        // Save last k elements
        for (int i = 0; i < k; i++) {
            temp[i] = nums[n - k + i];
        }

        // Move remaining elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Put saved elements at beginning
        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
    }
};