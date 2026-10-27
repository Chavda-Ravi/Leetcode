class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++)
        {
            int c =0 ;
            int x = nums[i];
            while(x!=0)
            {
                int digit = x %10;
                c++;
                x /=10;

            }
            if(c%2==0) count++;

        }
        return count;
    }
};