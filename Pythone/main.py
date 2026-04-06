import sys
from sortings.bubble_sort import bubble_sort
from sortings.selection_sort import selection_sort
from sortings.insertion_sort import insertion_sort
from sortings.quick_sort import quick_sort
from sortings.merge_sort import merge_sort

def main():
    print("="*40)
    print(" PROGRAM DEMO SORTING ALGORITHM ".center(40, "="))
    print("="*40)
    
    try:
        n = int(input("Masukkan jumlah data: "))
        
        print(f"Masukkan {n} data (pisahkan dengan spasi): ", end="")
        data_input = input().split()
        
        if len(data_input) != n:
            print("\n[Error] Jumlah data yang Anda masukkan tidak sesuai!")
            sys.exit(1)
            
        # Konversi string ke integer
        data = [int(x) for x in data_input]
        
    except ValueError:
        print("\n[Error] Harap masukkan angka yang valid!")
        sys.exit(1)

    print(f"\nData awal: {data}\n")

    # Mengeksekusi setiap algoritma
    bubble_sort(data)
    selection_sort(data)
    insertion_sort(data)
    quick_sort(data)
    merge_sort(data)

if __name__ == "__main__":
    main()