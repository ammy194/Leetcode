class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        int pos[n/2];
        int neg[n/2];

        int p = 0;
        int ne = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                pos[p] = nums[i];
                p++;
            }
            else {
                neg[ne] = nums[i];
                ne++;
            }
        }

        for(int i = 0; i < n/2; i++) {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
        }

        return nums;
    }
};