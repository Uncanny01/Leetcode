class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int counter=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1; j<n;j++)
            {
                if(i<j<n && nums[i]+nums[j]<target)
                {
                    counter++;
                }
            }
        }
        return counter;
    }
};