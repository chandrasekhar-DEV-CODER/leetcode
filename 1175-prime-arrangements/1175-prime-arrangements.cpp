class Solution {
public:
    int numPrimeArrangements(int n) {
        int k = 0;
        for (int i = 1; i <= n; i++) {
            if (isPrime(i)) k++;
        }
        
        long long mod = 1e9 + 7;
        long long result = 1;
        
        for (int i = 1; i <= k; i++) {
            result = (result * i) % mod;
        }
        for (int i = 1; i <= n - k; i++) {
            result = (result * i) % mod;
        }
        
        return (int)result;
    }

private:
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num <= 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }
};
