// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0|| (x % 10 == 0 && x != 0)){
//             return false;
//         }

//         int reversedHalf =0;
//         while (x > reversedHalf){
//             reversedHalf = reversedHalf * 10 + x % 10;
//             x /= 10;
//         }
//         return x == reversedHalf || x == reversedHalf / 10;
//     }
// };

class Solution {
    public:
    bool isPalindrome(int x){
        if(x < 0){
            return false;
        }

        long long reversedNum = 0;
        long long original = x;

        while(original > 0){
            int digit = original % 10;
            reversedNum = reversedNum * 10 + digit;
            original /= 10;
        }
        return x == reversedNum;
    }
};