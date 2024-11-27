/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct Node {
    int city;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int city) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->city = city;
    newNode->next = NULL;
    return newNode;
}

// Function to add a road to the graph
void addRoad(Node** graph, int from, int to) {
    Node* newNode = createNode(to);
    newNode->next = graph[from];
    graph[from] = newNode;
}

// BFS to find the shortest path from source to all nodes
void bfs(Node** graph, int n, int* distance) {
    int* queue = (int*)malloc(n * sizeof(int));
    int front = 0, rear = 0;

    for (int i = 0; i < n; ++i) distance[i] = INT_MAX;
    distance[0] = 0;
    queue[rear++] = 0;

    while (front < rear) {
        int current = queue[front++];
        Node* temp = graph[current];

        while (temp) {
            if (distance[temp->city] > distance[current] + 1) {
                distance[temp->city] = distance[current] + 1;
                queue[rear++] = temp->city;
            }
            temp = temp->next;
        }
    }

    free(queue);
}

// Main function to compute shortest path lengths after each query
int* shortestDistanceAfterQueries(int n, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    Node** graph = (Node**)malloc(n * sizeof(Node*));
    for (int i = 0; i < n; ++i) {
        graph[i] = NULL;
        if (i < n - 1) {
            addRoad(graph, i, i + 1);
        }
    }

    int* distance = (int*)malloc(n * sizeof(int));
    int* answer = (int*)malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    for (int i = 0; i < queriesSize; ++i) {
        addRoad(graph, queries[i][0], queries[i][1]);
        bfs(graph, n, distance);
        answer[i] = distance[n - 1];
    }

    // Free memory
    free(distance);
    for (int i = 0; i < n; ++i) {
        Node* temp = graph[i];
        while (temp) {
            Node* toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }
    free(graph);

    return answer;
}