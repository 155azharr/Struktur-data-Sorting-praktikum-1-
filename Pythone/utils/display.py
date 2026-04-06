from typing import List

def print_iteration(iteration: int, arr: List[int], context: str = "") -> None:
    """Menampilkan data pada setiap iterasi."""
    context_str = f" ({context})" if context else ""
    print(f"Iterasi ke-{iteration}{context_str}: {arr}")

def print_final_result(arr: List[int]) -> None:
    """Menampilkan hasil akhir sorting."""
    print(f"Hasil Akhir: {arr}\n")