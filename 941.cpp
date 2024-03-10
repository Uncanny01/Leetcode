class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
        {
            return false;
        }
        int peak=0;
        int peakI=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(peak<arr[i])
            {
                peak=arr[i];
                peakI=i;
            }
        }
        if(peakI==arr.size()-1 || peakI==0)
        return false;
        int i=0;
        while(i!=peakI)
        {
            if(arr[i]>=arr[i+1])
            {
                return false;
            }
            i++;
        }
        i=arr.size()-1;
        while(i!=peakI)
        {
            if(arr[i]>=arr[i-1])
            {
                return false;
            }
            i--;
        }
        return true;
    }
};