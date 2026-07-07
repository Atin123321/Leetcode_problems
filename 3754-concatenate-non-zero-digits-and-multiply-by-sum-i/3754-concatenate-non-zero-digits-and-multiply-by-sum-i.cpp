class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev = 0;

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        long long x = 0;
        long long sum = 0;

        while (rev > 0) {
            int dig = rev % 10;

            if (dig != 0) {
                x = x * 10 + dig;
                sum += dig;
            }

            rev /= 10;
        }

        return x * sum;
    }
};