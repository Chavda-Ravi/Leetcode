class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int mx = 0;

        for(char c : s) {
            if(c == '(') {
                count++;
                mx = max(mx, count);
            }
            else if(c == ')') {
                count--;
            }
        }

        return mx;
    }
};