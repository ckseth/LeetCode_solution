class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        long long power = 1;
        while (num > 0) {
            if ((num & 1) == 0) {
                ans += power;
            }
            power *= 2;
            num >>= 1;
        }
        return ans;
    }
};