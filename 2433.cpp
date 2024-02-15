class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> v;
        int size = pref.size();
        v.push_back(pref[0]);
        for(int i=1; i<size; i++)
        {
            int final = pref[i] ^ pref[i-1];
            v.push_back(final);
        }
        return v;
    }
};