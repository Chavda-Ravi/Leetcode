class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int freq = 0;

            for(int x : nums) {
                if(x == nums[i]) freq++;
            }

            if(freq != 3) continue;

            int pos[3], idx = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[j] == nums[i]) {
                    pos[idx++] = j;
                }
            }

            if(pos[1] - pos[0] == pos[2] - pos[1]) {
                count++;
            }
        }

        return count / 3;
    }
};
