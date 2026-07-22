class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mpp;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if (mpp[nums[i]] == (n / 3)+1) {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};