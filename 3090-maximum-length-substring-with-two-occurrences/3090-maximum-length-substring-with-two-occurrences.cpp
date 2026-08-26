class Solution {
public:
    int maximumLengthSubstring(std::string s) {
        int freq[26] = {0};
        int left = 0;
        int max_len = 0;
        int violations = 0;

        for (int right = 0; right < s.length(); right++) {
            if (++freq[s[right] - 'a'] == 3) {
                violations++;
            }

            if (violations > 0) {
                if (--freq[s[left] - 'a'] == 2) {
                    violations--;
                }
                left++;
            }

            max_len = right - left + 1;
        }

        return max_len;
    }
};