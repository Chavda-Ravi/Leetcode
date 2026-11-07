class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for (int a:nums)
        {
            if(a==0) return 0;
            else if(a<0) neg++;
        }
        if(neg%2!=0) return -1;
        return 1;
    }
};