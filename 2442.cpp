class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++)
        {
            string temp = to_string(nums[i]);
            reverse(temp.begin(), temp.end());
            int tempo = stoi(temp);
            nums.push_back(tempo);
        }
        unordered_set<int> s;
        for(auto i:nums)
        {
            s.insert(i);
        }
        return s.size();
    }
};