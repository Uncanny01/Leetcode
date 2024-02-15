class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> v;
        for(int i=0;i<accounts.size();i++)
        {
            int counter = 0;
            for(int j=0;j<accounts[i].size();j++)
            {
                counter+=accounts[i][j];
            }
            v.push_back(counter);
        }
        int max_number = *max_element(v.begin(), v.end());
        return max_number;
    }
};