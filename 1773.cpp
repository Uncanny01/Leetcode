class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int counter=0;
        for(int i=0; i<items.size(); i++)
        {
            if(ruleKey=="type")
            {
                if(ruleValue==items[i][0])
                counter++;
            }
            else if(ruleKey=="color")
            {
                if(ruleValue==items[i][1])
                counter++;
            }
            else if(ruleKey=="name")
            {
                if(ruleValue==items[i][2])
                counter++;
            }
        }
        return counter;
    }
};