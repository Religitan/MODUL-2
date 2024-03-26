#include <iostream>
using namespace std;

int main() {
  // Deklarasi array
  int data[10];

  // Input data dari user
  cout << "Masukkan data array (10 angka): ";
  for (int i = 0; i < 10; i++) {
    cin >> data[i];
  }

  // Menampilkan data array
  cout << "Data Array: ";
  for (int i = 0; i < 10; i++) {
    cout << data[i] << " ";
  }
  cout << endl;

  // Memisahkan bilangan genap dan ganjil
  cout << "Nomor Genap: ";
  for (int i = 0; i < 10; i++) {
    if (data[i] % 2 == 0) {
      cout << data[i] << ", ";
    }
  }
  cout << endl;

  cout << "Nomor Ganjil: ";
  for (int i = 0; i < 10; i++) {
    if (data[i] % 2 == 1) {
      cout << data[i] << ", ";
    }
  }
  cout << endl;

  return 0;
}
