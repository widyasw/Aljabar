#include <iostream>
using namespace std;

int main (){
	int i, j, b, k;
	int matriks [50][50];
	int hasil [50][50];
	int skalar;
	
	cout << " Masukkan jumlah baris : ";
	cin >> b;
	cout << " Masukkan jumlah kolom : ";
	cin >> k; 
	cout << " Masukkan Bilangan Skalar : ";
	cin >> skalar;
	
	cout << " Masukkan Elemen Matriks : ";
	
	//Menyimpan elemen matriks
	for (i = 0; i < b; i ++){
		for (j = 0; j < k; j++){
			cin >> matriks[i][j];
		}
	}
	
	// Mencetak matriks
	cout << "\n Matriks : " << endl;
   for (int i = 0; i < b; ++i) {
      for (int j = 0; j < k; ++j) {
         cout << " " << matriks[i][j];
         if (j == k - 1)
            cout << endl << endl;
    	}
	}
	
	// Menghitung dan menetak hasil perkalian skalar Matriks
	cout << " Hasil Perkalian Skalar Matriks adalah : \n";
	for (i = 0; i < b; i++){
		for (j = 0; j < k; j++){
			hasil [i][j]= skalar * matriks [i][j];
			cout << hasil[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}
