class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(k>len)
        {
            k%=len;
        }
        int start = len-k;
        vector<int> v(nums);
        nums.clear();
        for(int i=start; i<len; i++)
        {
            nums.push_back(v[i]);
        }
        for(int i=0; i<start; i++)
        {
            nums.push_back(v[i]);
        }
    }
};