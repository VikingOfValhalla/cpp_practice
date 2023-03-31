#include <iostream>
#include <string>
#include <vector>

std::string longestPalindrome(std::string s) {
    int n = s.size();
    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n));
    std::string ans = "";
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            if (len == 1) {
                dp[i][j] = true;
            } else if (len == 2) {
                dp[i][j] = (s[i] == s[j]);
            } else {
                dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
            }
            if (dp[i][j] && len > ans.size()) {
                ans = s.substr(i, len);
            }
        }
    }
    return ans;
}

int main() {
    std::string s = "babad";
    std::string longest = longestPalindrome(s);
    std::cout << "Longest Palindromic Substring: " << longest << std::endl;
    return 0;
}