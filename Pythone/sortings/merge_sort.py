from typing import List
from utils.display import print_iteration, print_final_result

def _merge_sort_recursive(data: List[int], low: int, high: int, iter_count: List[int]) -> None:
    if low < high:
        mid = (low + high) // 2
        _merge_sort_recursive(data, low, mid, iter_count)
        _merge_sort_recursive(data, mid + 1, high, iter_count)
        
        # Proses Merge
        left_half = data[low:mid + 1]
        right_half = data[mid + 1:high + 1]
        
        i = j = 0
        k = low
        
        while i < len(left_half) and j < len(right_half):
            if left_half[i] <= right_half[j]:
                data[k] = left_half[i]
                i += 1
            else:
                data[k] = right_half[j]
                j += 1
            k += 1
            
        while i < len(left_half):
            data[k] = left_half[i]
            i += 1
            k += 1
            
        while j < len(right_half):
            data[k] = right_half[j]
            j += 1
            k += 1
            
        iter_count[0] += 1
        print_iteration(iter_count[0], data, f"Merge {low}-{high}")

def merge_sort(arr: List[int]) -> List[int]:
    data = arr.copy()
    print("--- MERGE SORT ---")
    iter_count = [0]
    _merge_sort_recursive(data, 0, len(data) - 1, iter_count)
    print_final_result(data)
    return data