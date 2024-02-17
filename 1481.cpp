class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int i:arr)
        {
            mp[i]++;
        }
        int size = mp.size();
        vector<int> v;
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());
        int i = 0;
        int vector_size = v.size();
        while(k>0)
        {
            while(v[i]>0 && k>0)
            {
                v[i]--;
                k--;
            }
            if(v[i]==0)
            {
                i++;
                vector_size--;
            }
        }
        return vector_size;
    }
};