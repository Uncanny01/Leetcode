class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++)
        {
            int flag = 0;
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j] && flag==0)
                {
                    flag=1;
                    continue;
                }
                if(nums[i]==nums[j] && flag==1)
                {
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
        }
        return nums.size();
    }
};