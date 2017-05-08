# Longest Palindromic Substring

## Description
Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

## Example 1:
>Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.

## Example 2:
>Input: "cbbd"
Output: "bb"

## Solution:
>首先，只有一个字符的字符串肯定是回文字符串。

>我们用一个二维数组isPalindromic[i][j]表示子串[i,j]是否是回文字符串，毫无疑问isPalindromic[i][i]是true。

>如果i!=j，那我们很容易得出以下推导式：

>isPalindromic[i][j] = (s[i] == s[j] && isPalindromic[i + 1][j - 1])

>要使得子串[i,j]是回文字符串，则必须有字符s[i]等于字符s[j]，且这两个字符之间的字符串也是回文字符串。

>所以这就变成了一个动态规划问题。

>遍历的方向应该是i->[n..0], j->[0..n], j>i。

>之后求最大的回文子串长度就很简单了。
