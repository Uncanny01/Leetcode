class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        int len=s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]=='1')
            count++;
        }
        for(int i=0; i<len-1; i++)
        {
            s[i]='0';
        }
        s[len-1]='1';
        count-=1;
        if(count>0)
        {
            for(int i=0; i<count; i++)
            {
                s[i]='1';
            }
        }
        return s;
    }
};