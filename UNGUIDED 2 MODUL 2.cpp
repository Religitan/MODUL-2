#include <iostream>
using namespace std;

int main() {
  // Deklarasi variabel untuk menyimpan ukuran array
  int x, y, z;

  // Meminta user memasukkan ukuran array
  cout << "Masukkan jumlah baris (x): ";
  cin >> x;
  cout << "Masukkan jumlah kolom (y): ";
  cin >> y;
  cout << "Masukkan jumlah layer (z): ";
  cin >> z;

  // Deklarasi array tiga dimensi
  int array[x][y][z];

  // Meminta user memasukkan nilai elemen array
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << "Masukkan nilai array[" << i << "][" << j << "][" << k << "]: ";
        cin >> array[i][j][k];
      }
    }
  }

  // Menampilkan elemen array
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < y; j++) {
      for (int k = 0; k < z; k++) {
        cout << array[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
