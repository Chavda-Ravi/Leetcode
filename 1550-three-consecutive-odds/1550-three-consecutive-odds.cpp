class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool b =false;
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i-2]%2!=0 && arr[i-1]%2!=0 && arr[i]%2!=0)
            {
                b = true;
            }
        }
        return b;
    }
};