class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int sum = nums[0];
        v.push_back(sum);
        for(int i=1;i<nums.size();i++)
        {
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;
    }
};