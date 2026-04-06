from typing import List
from utils.display import print_iteration, print_final_result

def selection_sort(arr: List[int]) -> List[int]:
    data = arr.copy()
    n = len(data)
    print("--- SELECTION SORT ---")
    
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if data[j] < data[min_idx]:
                min_idx = j
        
        data[i], data[min_idx] = data[min_idx], data[i]
        print_iteration(i + 1, data)
        
    print_final_result(data)
    return data