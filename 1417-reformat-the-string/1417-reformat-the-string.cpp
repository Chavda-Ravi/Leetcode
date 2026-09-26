class Solution {
public:
    string reformat(string s) {
        int dcount = 0;
        string d;
        string c;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                dcount++;
                d.push_back(s[i]);
            }
            else {
                c.push_back(s[i]);
            }
        }

        int ccount = s.size() - dcount;

        if (abs(dcount - ccount) <= 1) {
            string res;

            if (ccount > dcount) {
                int i = 0;
                int j = 0;

                while (i < d.size()) {
                    res.push_back(c[j++]);
                    res.push_back(d[i++]);
                }

                res.push_back(c[j]);
                return res;
            }
            else {
                int i = 0;
                int j = 0;

                while (j < c.size()) {
                    res.push_back(d[i++]);
                    res.push_back(c[j++]);
                }

                if (i < d.size())
                    res.push_back(d[i]);

                return res;
            }
        }

        return "";
    }
};