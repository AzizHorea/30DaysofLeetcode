class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int reversed_num = 0;
        while (x > reversed_num) {
            int digit = x % 10;
            reversed_num = reversed_num * 10 + digit;
            x /= 10;
        }
        return x == reversed_num || x == reversed_num / 10;        
    }
};