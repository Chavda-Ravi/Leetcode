class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']++;
        }
        int max_v=0;
        int max_c=0;
        for (int i=0;i<26;i++)
        {
            if(i==0 || i==4 || i==8 || i==14 || i==20)
            {
                max_v=max(max_v,freq[i]);
            }
            else
            {
                max_c=max(max_c,freq[i]);
            }
        }
        
        return (max_c+max_v);
    }
};