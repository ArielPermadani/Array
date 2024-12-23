#include <iostream>
using namespace std;

int data1[3][3];
int data2[3][3];
int hasil[3][3];

void main() {
    cout << "Masukkan data matriks 1:" << "\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Nilai ke-" << i << "," << j << ": ";
            cin >> data1[i][j];
        }
        cout << "\n";
    }

    cout << "Masukkan data matriks 2:" << "\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Nilai ke-" << i << "," << j << ": ";
            cin >> data2[i][j];
        }
        cout << "\n";
    }

    // penjumlahan matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = data1[i][j] + data2[i][j];
        }
    }

    cout << "Hasil penjumlahan Matriks:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << "\n"; 
    }

}
