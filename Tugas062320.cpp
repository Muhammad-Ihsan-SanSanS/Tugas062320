#include <iostream>
using namespace std;

int main () {
	
	cout << "_=-*PENGISIAN BIODATA*-=_\n\n";
	string nama;
	cout << "Ikuti Langkah Berikut untuk Memasukkan Data Diri Anda!\n";
	cout << "Siapa Nama Anda?\n";
	getline (cin, nama);
	cout << "\nHello " << nama << ", Mari Isi Lebih Lengkap Datanya!\n";
	
	int a;
	bool hasil;
	cout << "Apakah Anda Laki-laki?\nTekan 1 Jika TIDAK, Tekan 2 Jika YA: ";
	cin >> a;
	hasil = a - 1;
	
	char goldar;
	cout << "\nMasukkan Jenis Golongan Darah Anda:\n";
	cin >> goldar;
	
	float tanggal;
	cout << "\nMasukkan Tanggal Lahir Anda:\n";
	cin >> tanggal;
	
	double bulan, tahun;
	cout << "\nMasukkan Bulan Berapa Anda Lahir:\n";
	cin >> bulan;
	cout << "\nMasukkan Tahun Berapa Anda Lahir:\n";
	cin >> tahun;
	
	cout << "\nHasil Data yang Telah Anda Masukkan:\n";
	cout << "Nama: " << nama <<endl;
	cout << "Gender: " << hasil <<" (Ket: 1 = LK, 0 = PR)" <<endl;
	cout << "Tipe Golongan Darah: " << goldar <<endl;
	cout << "Tanggal Lahir: " << tanggal << "/" << bulan << "/" << tahun;
	
	return 0;
}
