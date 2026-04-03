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