class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for(int i=0; i<sentences.size(); i++)
        {
            int freq = 0;
            for(int j=0; j<sentences[i].size(); j++)
            {
                if(sentences[i][j]==' ')
                {
                    freq++;
                }
            }
            if(maxi<freq)
            {
                maxi=freq;
            }
        }
        return maxi+1;
    }
};