from typing import List
from utils.display import print_iteration, print_final_result

def bubble_sort(arr: List[int]) -> List[int]:
    data = arr.copy() # Hindari mengubah data asli
    n = len(data)
    print("--- BUBBLE SORT ---")
    
    for i in range(n):
        for j in range(0, n - i - 1):
            if data[j] > data[j + 1]:
                data[j], data[j + 1] = data[j + 1], data[j]
        print_iteration(i + 1, data)
        
    print_final_result(data)
    return data