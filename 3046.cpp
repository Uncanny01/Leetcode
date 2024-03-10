class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int counter=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1]==nums[i])
            {
                counter++;
            }
            else
            {
                counter = 1;
            }
            if(counter==3)
            {
                return false;
            }
        }
        return true;
    }
};