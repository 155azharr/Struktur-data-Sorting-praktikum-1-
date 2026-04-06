from typing import List
from utils.display import print_iteration, print_final_result

def insertion_sort(arr: List[int]) -> List[int]:
    data = arr.copy()
    n = len(data)
    print("--- INSERTION SORT ---")
    
    for i in range(1, n):
        key = data[i]
        j = i - 1
        while j >= 0 and data[j] > key:
            data[j + 1] = data[j]
            j -= 1
        data[j + 1] = key
        print_iteration(i, data)
        
    print_final_result(data)
    return data