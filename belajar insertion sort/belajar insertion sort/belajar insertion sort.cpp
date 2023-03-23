#include <iostream>
using namespace std;

nt arr[20];											// Membuat Array dengan panjang data 20
int n;													// Membuat Variable Inputan n

void input() {					// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada array : ";	// Membuat Inputan jumlah element Array
		cin >> n;										// memanggil variable inputan n 

		if (n <= 20) {										// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen,\n";	// Menampilkan Pesan jika data lebih dari 20
		}
	}