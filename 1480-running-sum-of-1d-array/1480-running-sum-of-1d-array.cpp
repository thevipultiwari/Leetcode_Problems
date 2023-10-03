class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        int sum=0;
        for(int i=0; i<nums.size(); i++) {
            sum +=nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
};