class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1;
        vector<int> v2;
        vector<int> finalV;
        for(int i=0;i<n;i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=n;i<n*2;i++)
        {
            v2.push_back(nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            finalV.push_back(v1[i]);
            finalV.push_back(v2[i]);
        }
        return finalV;
    }
};