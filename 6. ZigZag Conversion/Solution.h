class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string res;
        for (int i = 1; i <= numRows; i++) {
            for (int k = 0; k * (numRows * 2 - 2) + i - 1 < s.size(); k++) {
                res.push_back(s[k * (numRows * 2 - 2) + i - 1]);
                if ((k + 1) * (numRows * 2 - 2) - i + 1 < s.size() && i!=1 && i!=numRows) {
                    res.push_back(s[(k + 1) * (numRows * 2 - 2) - i + 1]);
                }
            }
        }
        return res;
    }
};
