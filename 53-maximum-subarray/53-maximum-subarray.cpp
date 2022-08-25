class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};