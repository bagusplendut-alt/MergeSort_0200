#include <iostream>
using namespace std;

// Inisialisasi array utama dan array sementara untuk proses merging
int arr[20], B[20];
// n adalah ukuran input array
int n;

void input() {
    while (true) {
        cout << "Masukkan panjang element array : ";
        cin >> n;

        if (n <= 20) {
            break;
        } else {
            cout << "\nMaksimal panjang array adalah 20" << endl;
        }
    }

    cout << "\n------------------------------" << endl;
    cout << "Inputkan Isi element array" << endl;
    cout << "------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Array index ke - " << i << " : ";
        cin >> arr[i];
    }
}

// Fungsi mergeSort dengan pendekatan Divide and Conquer
void mergeSort(int low, int high) {
    // Step 1: Base case - jika sub-array hanya memiliki 1 elemen
    if (low >= high) {
        return;
    }

    // Step 2: Mencari titik tengah (mid)
    int mid = (low + high) / 2;

    // Step 3: Membagi array secara rekursif
    mergeSort(low, mid);        // Bagian kiri
    mergeSort(mid + 1, high);   // Bagian kanan