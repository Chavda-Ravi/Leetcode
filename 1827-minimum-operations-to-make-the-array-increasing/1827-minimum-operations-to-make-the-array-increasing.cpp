class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for (int i=1;i<nums.size();i++)
        {
            int x=nums[i]-nums[i-1];
            if(x>0) continue;
            else 
            {
                int n=abs(x)+1;
                count +=n;
                nums[i] +=n;
            }
        }
        return count;
    }
};