class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        int useless = nums1.size()-m;
        while(useless!=0)
        {
            nums1.pop_back();
            useless--;
        }
        for(int i=0; i<n; i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        for(auto res:nums1)
        {
            cout<<res<<",";
        }
    }
};