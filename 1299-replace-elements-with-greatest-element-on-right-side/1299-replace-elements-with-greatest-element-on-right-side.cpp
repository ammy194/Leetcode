
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        int maxi = arr[n - 1];
        ans[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--) {
            ans[i] = maxi;
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        return ans;
    }
};
