class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int rounds = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<rounds; i+=2)
        {
            swap(nums[i], nums[i+1]);
        }
        return nums;
    }
};