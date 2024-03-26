#include <iostream>
using namespace std;

int main() {
  // Deklarasi array
  const int MAX_SIZE = 100;
  int data[MAX_SIZE];
  int n;

  // Meminta user memasukkan jumlah elemen array
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  if (n <= 0 || n > MAX_SIZE) {
    cout << "Jumlah elemen array tidak valid. Program berhenti.";
    return 1;
  }

  // Meminta user memasukkan nilai elemen array
  for (int i = 0; i < n; i++) {
    cout << "Masukkan nilai array[" << i << "]: ";
    cin >> data[i];
  }

  // Menampilkan menu
  int pilihan;
  do {
    cout << endl;
    cout << "Menu:" << endl;
    cout << "1. Cari nilai maksimum" << endl;
    cout << "2. Cari nilai minimum" << endl;
    cout << "3. Cari nilai rata-rata" << endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    // Menjalankan operasi sesuai pilihan
    switch (pilihan) {
      case 1: {
        // Mencari nilai maksimum
        int max = data[0];
        for (int i = 1; i < n; i++) {
          if (data[i] > max) {
            max = data[i];
          }
        }
        cout << "Nilai maksimum: " << max << endl;
        break;
      }2
      3
      2
      case 2: {
        // Mencari nilai minimum
        int min = data[0];
        for (int i = 1; i < n; i++) {
          if (data[i] < min) {
            min = data[i];
          }
        }
        cout << "Nilai minimum: " << min << endl;
        break;
      }
      case 3: {
        // Mencari nilai rata-rata
        int total = 0;
        for (int i = 0; i < n; i++) {
          total += data[i];
        }
        float rata_rata = static_cast<float>(total) / n;
        cout << "Nilai rata-rata: " << rata_rata << endl;
        break;
      }
      case 4:
        // Keluar dari program
        cout << "Terima kasih telah menggunakan program ini!" << endl;
        break;
      default:
        // Pilihan tidak valid
        cout << "Pilihan tidak valid!" << endl;
    }
  } while (pilihan != 4);

  return 0;
}