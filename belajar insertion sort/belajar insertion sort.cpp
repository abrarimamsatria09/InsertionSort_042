#include <iostream>
using namespace std;

int arr[20];		//membuat array dengan panjang data 20
int n;				//membuat variabel inputan n

void input() {		//procedure input
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";	//membuat inputan jumlah element array
		cin >> n;										//memanggil variable inputan n
	}
}