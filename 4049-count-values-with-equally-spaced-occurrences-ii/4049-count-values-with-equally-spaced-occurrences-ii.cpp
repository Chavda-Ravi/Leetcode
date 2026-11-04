class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int count = 0;
        unordered_map<int, vector<int>> freq;
        
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]].push_back(i);
        }

        for (auto& a : freq) {
            vector<int>& arr = a.second;
            
            if (arr.size() >= 3) {
                int l = arr[1] - arr[0];
                bool b = true;
                
                for (int k = 1; k < arr.size(); k++) {
                    if (arr[k] - arr[k - 1] != l) {
                        b = false;
                        break;
                    }
                }
                
                if (b) count++;
            }
        }
        
        return count;
    }
};