class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        vector<int> rem(60, 0);
        
        for (int t : time) {
            int r = t % 60;
            int complement = (60 - r) % 60;
            count += rem[complement];
            rem[r]++;
        }
        
        return count;
    }
};