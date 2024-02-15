class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            int counter=0;
            for(int j=0; j<size;j++)
            {
                if(nums[i]>nums[j])
                {
                    counter++;
                }
            }
            v.push_back(counter);
        }
        return v;
    }
};