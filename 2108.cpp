class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> vStr;
        int size = words.size();
        string rev;
        for(int i=0;i<size;i++)
        {
            rev = words[i];
            reverse(rev.begin(), rev.end());
            if(words[i]==rev)
            {
                return rev;
                break;
            }
        }
        return "";
    }
};