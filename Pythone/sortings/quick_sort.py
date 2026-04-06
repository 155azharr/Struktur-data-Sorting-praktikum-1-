from typing import List
from utils.display import print_iteration, print_final_result

def _quick_sort_recursive(data: List[int], low: int, high: int, iter_count: List[int]) -> None:
    if low < high:
        pivot = data[high]
        i = low - 1
        for j in range(low, high):
            if data[j] <= pivot:
                i += 1
                data[i], data[j] = data[j], data[i]
        
        data[i + 1], data[high] = data[high], data[i + 1]
        pi = i + 1
        
        iter_count[0] += 1
        print_iteration(iter_count[0], data, f"Pivot di {pi}")
        
        _quick_sort_recursive(data, low, pi - 1, iter_count)
        _quick_sort_recursive(data, pi + 1, high, iter_count)

def quick_sort(arr: List[int]) -> List[int]:
    data = arr.copy()
    print("--- QUICK SORT ---")
    iter_count = [0] # Menggunakan list sebagai referensi counter (mutable)
    _quick_sort_recursive(data, 0, len(data) - 1, iter_count)
    print_final_result(data)
    return data