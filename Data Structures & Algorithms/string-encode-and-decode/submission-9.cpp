class Solution {
   public:
    string encode(vector<string>& strs) {
        string s;

        for (int i = 0; i < strs.size(); i++) {
            s += to_string(strs[i].length()) + "#" + strs[i];
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> res;
        for (int i = 0; i < s.length();) {
            string so;
            while (s[i] != '#') {
                so += s[i];
                i++;
            }
            int k = stoi(so);
            i++;
            int j = 1;
            string luu;
            while (j <= k) {
                luu += s[i];
                i++;
                j++;
            }
            res.push_back(luu);
        }

        return res;
    }
};
