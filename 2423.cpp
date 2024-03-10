class Solution {
public:
    bool equalFrequency(string word) {
    map<char, int> mp;
    for(auto i:word)
    {
      mp[i]++;
    }
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    for(int i=0; i<mp.size(); i++)
    {
      auto it = next(mp.begin(), i);
      if(maxFreq<it->second)
      maxFreq = it->second;
      if(minFreq>it->second)
      minFreq = it->second;
    }
    int maxcount=0, mincount=0;
    for(int i=0;  i<mp.size(); i++)
    {
      auto it = next(mp.begin(), i);
      if(maxFreq==it->second)
      maxcount++;
      if(minFreq==it->second)
      mincount++;
    }
    if(maxFreq==1 || mp.size()==1)
    return true;
    if(maxcount==mp.size()-1)
    return minFreq==1 || (minFreq==maxFreq-1 && mp.size()==2);
    if(mincount==mp.size()-1)
    return maxFreq==minFreq+1;
    return false;
    }
};