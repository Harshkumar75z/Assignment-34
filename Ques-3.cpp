class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector <long long> ans(n);
        ans[0] = 2*nums[0];
        int maxi = nums[0];
        for(int i=1;i<n;i++){
            maxi = max(maxi,nums[i]);
            ans[i] = nums[i] + ans[i-1] + maxi;
        }
        return ans;
    }
};