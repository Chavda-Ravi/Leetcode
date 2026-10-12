class Solution {
public:
    int countLargestGroup(int n) {
        int temp[37] = {0}; 
        int max_size = 0;
        
        for (int i = 1; i <= n; i++) {
            int x = i;
            int sum = 0;
            while (x != 0) {
                sum += x % 10;
                x /= 10;
            }
            temp[sum]++;
            if (temp[sum] > max_size) {
                max_size = temp[sum];
            }
        }
        
        int count = 0;
        for (int i = 1; i < 37; i++) {
            if (temp[i] == max_size) {
                count++;
            }
        }
        
        return count;
    }
};
