class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefgcd(nums.size());
        int mxi=INT_MIN;
        for (int i=0;i<nums.size();i++)
        {
           
            mxi=max(nums[i],mxi);
            
            prefgcd[i]=gcd(nums[i],mxi);
        }
        sort(prefgcd.begin(),prefgcd.end());
        if(prefgcd.size()%2!=0) 
        {
            prefgcd.erase(prefgcd.begin()+prefgcd.size()/2);
        }
        int i=0;
        int j=prefgcd.size()-1;
        long long sum=0;
        while(i<j)
        {
            int gc=gcd(prefgcd[i],prefgcd[j]);
            sum +=gc;
            i++;
            j--;
        }
        return sum;
    }
};