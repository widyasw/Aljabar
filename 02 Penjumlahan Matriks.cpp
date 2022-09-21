#include <iostream>
using namespace std;

int main() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];

  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;

  // Menginput elemen matriks1
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
     // Mencetak matriks1
   cout << "\nMatriks 1: " << endl;
   for (int i = 0; i < m; ++i) {
   		for (int j = 0; j < n; ++j) {
         cout << " " << matriks1 [i][j];
         if (j == n - 1)
            cout << endl << endl;
        }
    }
    
  // Menginput elemen matriks2
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
     // Mencetak matriks2
   cout << "\nMatriks 2: " << endl;
   for (int i = 0; i < m; ++i) {
   		for (int j = 0; j < n; ++j) {
         cout << " " << matriks2 [i][j];
         if (j == n - 1)
            cout << endl << endl;
        }
    }
  
  // Menghitung dan mencetak hasil penjumlahan matriks
  cout << "hasil penjumlahan matriks: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // Rumus penjumlahan matriks
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}
