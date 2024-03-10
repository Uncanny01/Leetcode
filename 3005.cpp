class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_count = 1;
        int count=1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(max_count<count)
                max_count=count;
            }
            else
            count=1;
        }
        count=1;
        int flag=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
                if(count==max_count)
                flag++;
            }
            else
            count=1;
        }
        int res;
        flag>0?res=flag*max_count:res=max_count*nums.size();
        return res;
    }
};