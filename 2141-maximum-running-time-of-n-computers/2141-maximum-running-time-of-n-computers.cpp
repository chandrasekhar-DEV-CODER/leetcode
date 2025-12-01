class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sumPower = 0;
        for (int b : batteries) {
            sumPower += b;
        }

        long long low = 1;
        long long high = sumPower / n;
        long long ans = 0;

        while (low <= high) {
            long long targetTime = low + (high - low) / 2;

            long long currentPowerCheck = 0;
            for (int b : batteries) {
                currentPowerCheck += min((long long)b, targetTime);
            }

            if (currentPowerCheck >= (long long)n * targetTime) {
                ans = targetTime;
                low = targetTime + 1;
            } else {
                high = targetTime - 1;
            }
        }

        return ans;
    }
};