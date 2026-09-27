class Solution {
public:
    bool areNumbersAscending(string s) {
        int a = 0, b = 0;
        int ind = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {

                while (i < s.size() && isdigit(s[i])) {
                    a = a * 10 + (s[i] - '0');
                    i++;
                }

                ind = i;
                break;
            }
        }

        for (int i = ind; i < s.size(); i++) {

            if (s[i] >= '0' && s[i] <= '9') {

                b = 0;

                while (i < s.size() && isdigit(s[i])) {
                    b = b * 10 + (s[i] - '0');
                    i++;
                }

                if (b > a)
                    a = b;
                else
                    return false;
            }
        }

        return true;
    }
};