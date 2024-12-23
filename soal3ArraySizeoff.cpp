// soal3ArraySizeoff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Nilai[] = { 1, 2, 3, 4, 5, 9, 6, 10, 66, 23, 55, 87, 100 };

void main() {
	int length = sizeof(Nilai) / sizeof(*Nilai);
	cout << "Jumlah dari panjang Array adalah : " << length;
}
