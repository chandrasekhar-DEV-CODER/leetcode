class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // Initialize result with 0
        stack<int> st; // Monotonic decreasing stack

        for (int i = 0; i < n; i++) {
            // Check if the current temperature is greater than the temperature at the index stored in the stack
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int index = st.top();
                st.pop();
                result[index] = i - index; // Calculate the number of days
            }
            // Push the current index to the stack
            st.push(i);
        }

        return result;
    }
};
