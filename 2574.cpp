class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> vLeft;
        vector<int> vRight;
        vector<int> vFinal;
        int sum = 0;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            vLeft.push_back(sum);
            sum+=nums[i];
        }
        sum = 0;
        for(int i=size-1; i>=0; i--)
        {
            vRight.push_back(sum);
            sum+=nums[i];
        }
        reverse(vRight.begin(), vRight.end());
        for(int i=0; i<size; i++)
        {
            if(vLeft[i]>vRight[i])
            {
                int diff = vLeft[i]-vRight[i];
                vFinal.push_back(diff);
            }
            else
            {
                int diff = vRight[i]-vLeft[i];
                vFinal.push_back(diff);
            }
        }
        return vFinal;
    }
};