class Solution {
public:
    bool isPrefixAndSuffix(const string& first_string, const string& second_string)
    {
        return second_string.find(first_string) == 0 && second_string.rfind(first_string) == second_string.size() - first_string.size();
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int counter = 0;
        int size = words.size();
        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<size; j++)
            {
                if(isPrefixAndSuffix(words[i], words[j]))
                {
                    counter++;
                }
            }
        }
        return counter;
    }
};