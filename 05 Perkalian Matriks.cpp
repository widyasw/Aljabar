#include <iostream>
using namespace std;

int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> n;

  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> q;

  if(n != p){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
  	
  	// Menginput elemen matriks1
    cout << "Elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }
    // Mencetak matriks1
   cout << "\nmatriks 1: " << endl;
   for (int i = 0; i < m; ++i) {
   		for (int j = 0; j < n; ++j) {
         cout << " " << matriks1 [i][j];
         if (j == n - 1)
            cout << endl << endl;
        }
    }
    
    // Menginput elemen matriks2
    cout << "Elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    // Mencetak matriks2
   cout << "\nmatriks 2: " << endl;
   for (int i = 0; i < m; ++i) {
   		for (int j = 0; j < n; ++j) {
         cout << " " << matriks2 [i][j];
         if (j == n - 1)
            cout << endl << endl;
        }
    }
    
    // Menghitung hasil perkalian matriks dengan matriks
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j]; // Rumus perkalian matriks dengan matriks
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    
    // Mencetak hasil perkalian matriks dengan matriks
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
  
  return 0;
}
