class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> finalV;
        for(int i=1; i<nums.size(); i++)
        {
            while(nums[i-1]!=0)
            {
                finalV.push_back(nums[i]);
                nums[i-1]--;
            }
            i++;
        }
        return finalV;
    }
};