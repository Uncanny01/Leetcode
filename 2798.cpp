class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int counter=0;
        for(int i=0;i<hours.size();i++)
        {
            if(hours[i]>=target)
            {
                counter++;
            }
        }
        return counter;
    }
};