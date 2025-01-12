class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        import numpy as np
        a = np.array(matrix).reshape(-1)
        if target in a:
            return True
        return False