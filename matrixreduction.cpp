#include <iostream>

using namespace std;

int main() {
    int baris, kolom;

    cout << "Berapa baris matriks yang anda inginkan: ";
    cin >> baris;
    cout << "Berapa kolom matriks yang anda inginkan: ";
    cin >> kolom;

    int matriksA[baris][kolom];
    int matriksB[baris][kolom];
    int finalMatriks[baris][kolom];

    cout << "\nMasukan nilai matriks A: \n" << endl;
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
           short n;
           cout << "Masukan nilai baris ke-" << i << " kolom ke-" << j << ": ";
           cin >> n;

            matriksA[i][j] = n;
        }
    }

    cout << "\nMasukan nilai matriks B: \n" << endl;
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
           short n;
           cout << "Masukan nilai baris ke-" << i << " kolom ke-" << j << ": ";
           cin >> n;

            matriksB[i][j] = n;
        }
    }

    // Display the data of two matrix 
    cout << "\nMatriks A: " << endl;
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B: " << endl;
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }

    // Count the deduction
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
            finalMatriks[i][j] = matriksA[i][j] - matriksB[i][j];
        }
    }

    // Display the result
    cout << "\nResult of deduction: " << endl;
    for(short i = 0; i < baris; i++) {
        for(short j = 0; j < kolom; j++) {
            cout << finalMatriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}