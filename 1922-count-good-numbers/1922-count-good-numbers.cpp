class Solution {
public:
    long long mod = 1000000007;

    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % mod;
            }

            a = (a * a) % mod;
            b /= 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long e = (n + 1) / 2;
        long long o = n / 2;

        return (power(5, e) * power(4, o)) % mod;
    }
};