class Solution {
public:
    bool checkString(string s) {
        bool b = true;
        for (int i = 1; i < (int)s.size(); i++) {
            if (s[i] == 'a' && s[i - 1] == 'b') {
                b = false;
            }
        }
        return b;
    }
};