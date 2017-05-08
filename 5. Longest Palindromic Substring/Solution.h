class Solution {
public:
    string longestPalindrome(string s) {
        const auto size = s.size();

        bool isPalindromic[size][size];
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                isPalindromic[i][j] = (i >= j);

        for (int j = 1; j < size; j++)
            for (int i = 0; i < j; i++)
                isPalindromic[i][j] = (s[i] == s[j] && isPalindromic[i + 1][j - 1]);

        int max = 1;
        int left = 0;
        for (int i = 0; i < size - 1; i++)
            for (int j = i; j < size; j++)
                if (isPalindromic[i][j] && j-i+1>max){
                        max=j-i+1;
                        left = i;
                }

        return s.substr(left,max);
    }
};
