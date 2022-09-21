#include <iostream>
using namespace std;
int main(){
  int i, j, m, n, matriks[50][50], transpose[50][50];
  cout << "Masukkan jumlah baris : ";
  cin >> m;
  cout << "Masukkan jumlah kolom : ";
  cin >> n;
  cout << "Masukkan elemen matriks\n";
  
  //Menyimpan elemen matriks
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }
  
   // Mencetak Matriks
   cout << "\nMasukkan Matrix: " << endl;
   for (int i = 0; i < m; ++i) {
   		for (int j = 0; j < n; ++j) {
         cout << " " << matriks[i][j];
         if (j == n - 1)
            cout << endl << endl;
        }
    }
  
  //Menghitung transpose matriks
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }
  
  //Mencetak hasil transpose matriks
  cout << "\nHasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
