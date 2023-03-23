#include <iostream>
using namespace std;

int arr[20];		//membuat array dengan panjang data 20
int n;				//membuat variabel inputan n

void input() {		//procedure input
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";	//membuat inputan jumlah element array
		cin >> n;										//memanggil variable inputan n

		if (n <= 20) {									//membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\narray yang anda masukkan maksimal 20 elemen. \n";	//menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;									//membuat jarak per baris program
	cout << "======================" << endl;		//membuat tampilan susunan data element array
	cout << "masukkan element array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)						//menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "data ke-" << (i + 1) << ": ";		//memasukkan atau menginputkan nilai data n
		cin >> arr[i];								//menyimpan nilai data n kedalam array arr
	}
}

void inserionsort() {							//procedure insertionsort

	int temp;									//membuat variable data temporer atau penyimpanan sementara
	int j;										//membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {				//looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];							//simpan nilai arr[i] ke variable sementara temp

		j = i - 1;								//setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)			//looping while dimana nilai j lebih besar sama dengan 0 dan
												//arr[j] lebih besar dari temp
		{
			arr[j + 1] = arr[j];				//simpan arr[j] ke dalam variable arr[j+1]
			j--;								//decrement nilai j by 1
		}

		arr[j + 1] = temp;						//simpan nilai temp ke dalam arr[j+1]

		cout << "\nstep " << i << "i ";			//output ke layar
		for (int k = 0; k < n; k++) {			//looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";				//output ke layar
		}

	}
}