#pragma warning(disable:4995)

#include <iostream>
#include <string.h>
 
/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	char tanggal[11];
	int mm, dd, yyyy;

	cout << "Masukkan tanggal  : "; cin >> tanggal;

	if (strlen(tanggal) < 10 || strlen(tanggal) > 10) {
		cout << "\n Kesalahan: Input harus berformat mm/dd/yyyy";
	} else if (strlen(tanggal) == 10) {
		char m[3], d[3], y[5];
		int i, j;

		for ( i = 0; i < 2; i++){
			m[i] = tanggal[i];
		}

		for (i = 3, j = 10; i < 5; i++, j++) {
			d[j] = tanggal[i];
		}

		for (i = 6, j = 0; i < 10; i++, j++) {
			y[j] = tanggal[j];
		}

		mm = atoi(m);
		dd = atoi(d);
		yyyy = atoi(y);

		cout << "\n Bulan    : " << mm;
		cout << "\n Tanggal  : " << dd;
		cout << "\n Tahun    : " << yyyy;
	} else {
		cout << "\n Kesalahan: Input harus berformat mm/dd/yyyy";
	}

	return 0;
}