class Solution {
public:
    // Count how many numbers in [1..num] have bit at position p set
    __int128 countSetBits(long long num, int p) {
        __int128 cycle = (__int128)1 << p; 
        __int128 fullCycles = (num + 1) / cycle;
        __int128 remainder = (num + 1) % cycle;
        return fullCycles * (cycle / 2) + max((__int128)0, remainder - (cycle / 2));
    }

    // Accumulated price up to num
    __int128 accumulatedPrice(long long num, int x) {
        __int128 total = 0;
        for (int p = x; p <= 60; p += x) {
            total += countSetBits(num, p);
        }
        return total;
    }

    long long findMaximumNumber(long long k, int x) {
        long long low = 1, high = (long long)1e18, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (accumulatedPrice(mid, x) <= k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};