#include <vector>

class Solution {
public:
    int makeConnected(int n, std::vector<std::vector<int>>& connections) {
        if (connections.size() < (n - 1)) {
            return -1;
        } 
        else {
            std::vector<std::vector<int>> graph(n);
            for (auto& edge : connections) {
                graph[edge[0]].push_back(edge[1]);
                graph[edge[1]].push_back(edge[0]);
            }

            std::vector<bool> visited(n, false);
            int components = 0;
            for (int i = 0; i < n; i++) {
                if (!visited[i]) {
                    components++; std::vector<int> q = {i};
                    visited[i] = true;
                    
                    for (size_t j = 0; j < q.size(); j++) {
                        int curr = q[j];
                        for (int neighbor : graph[curr]) {
                            if (!visited[neighbor]) {
                                visited[neighbor] = true;
                                q.push_back(neighbor);
                            }
                        }
                    }
                }
            }
            return components - 1;
        }
    }
};
