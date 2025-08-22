int minimumArea(int** grid, int gridSize, int* gridColSize) {
     int top = INT_MAX, bottom = INT_MIN, left = INT_MAX, right = INT_MIN;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (grid[i][j] == 1) {
                if (i < top) top = i;
                if (i > bottom) bottom = i;
                if (j < left) left = j;
                if (j > right) right = j;
            }
        }
    }
    int height = bottom - top + 1;
    int width = right - left + 1;
    return height * width;
}