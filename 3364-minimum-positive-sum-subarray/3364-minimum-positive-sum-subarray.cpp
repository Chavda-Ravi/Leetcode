class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min_sum=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0,len=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                len++;
                if(len>=l && len<=r && sum>0) min_sum=min(min_sum,sum);
                if(len>r) break;
            }
        }
        return min_sum==INT_MAX?-1:min_sum;
    }
};
