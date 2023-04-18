class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++){
            nums[i] = nums[i] + nums[i-1];
            ///每一格，就是把前一格，加起來
        }
        return nums;
    }
};
