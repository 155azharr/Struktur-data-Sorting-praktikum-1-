#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk mencetak array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// 1. Bubble Sort
void bubbleSort(vector<int> arr) {
    int n = arr.size();
    cout << "\n--- Proses Bubble Sort ---\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << "Iterasi " << i + 1 << ": ";
        printArray(arr);
    }
    cout << "\nData hasil sorting: "; printArray(arr);
}

// 2. Selection Sort
void selectionSort(vector<int> arr) {
    int n = arr.size();
    cout << "\n--- Proses Selection Sort ---\n";
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
        cout << "Iterasi " << i + 1 << ": ";
        printArray(arr);
    }
    cout << "\nData hasil sorting: "; printArray(arr);
}

// 3. Insertion Sort
void insertionSort(vector<int> arr) {
    int n = arr.size();
    cout << "\n--- Proses Insertion Sort ---\n";
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        cout << "Iterasi " << i << ": ";
        printArray(arr);
    }
    cout << "\nData hasil sorting: "; printArray(arr);
}

// 4. Quick Sort
int partition(vector<int>& arr, int low, int high, int& step) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    cout << "Iterasi Partisi ke-" << step++ << " (pivot " << pivot << "): ";
    printArray(arr);
    return (i + 1);
}

void quickSortRecursive(vector<int>& arr, int low, int high, int& step) {
    if (low < high) {
        int pi = partition(arr, low, high, step);
        quickSortRecursive(arr, low, pi - 1, step);
        quickSortRecursive(arr, pi + 1, high, step);
    }
}

void quickSort(vector<int> arr) {
    cout << "\n--- Proses Quick Sort ---\n";
    int step = 1;
    quickSortRecursive(arr, 0, arr.size() - 1, step);
    cout << "\nData hasil sorting: "; printArray(arr);
}

// 5. Merge Sort
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { arr[k] = L[i]; i++; } 
        else { arr[k] = R[j]; j++; }
        k++;
    }
    while (i < n1) { arr[k] = L[i]; i++; k++; }
    while (j < n2) { arr[k] = R[j]; j++; k++; }
}

void mergeSortRecursive(vector<int>& arr, int l, int r, int& step) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSortRecursive(arr, l, m, step);
        mergeSortRecursive(arr, m + 1, r, step);
        merge(arr, l, m, r);
        cout << "Iterasi Merge ke-" << step++ << ": ";
        printArray(arr);
    }
}

void mergeSort(vector<int> arr) {
    cout << "\n--- Proses Merge Sort ---\n";
    int step = 1;
    mergeSortRecursive(arr, 0, arr.size() - 1, step);
    cout << "\nData hasil sorting: "; printArray(arr);
}

// Program Utama
int main() {
    int n;
    
    // Sesuai instruksi: Input jumlah data
    cout << "Masukkan jumlah data: ";
    cin >> n;

    vector<int> arrOriginal(n);
    
    // Sesuai instruksi: Input data yang akan disorting
    cout << "Masukkan " << n << " data (pisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) {
        cin >> arrOriginal[i];
    }

    int pilihan;
    do {
        cout << "\n=== MENU SORTING ===\n";
        cout << "1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Quick Sort\n5. Merge Sort\n0. Keluar\n";
        cout << "Pilih metode (0-5): ";
        cin >> pilihan;

        if (pilihan == 0) {
            cout << "Keluar dari program.\n";
            break;
        }

        switch (pilihan) {
            case 1: bubbleSort(arrOriginal); break;
            case 2: selectionSort(arrOriginal); break;
            case 3: insertionSort(arrOriginal); break;
            case 4: quickSort(arrOriginal); break;
            case 5: mergeSort(arrOriginal); break;
            default: cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}