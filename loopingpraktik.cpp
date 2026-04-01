#include<iostream>
using namespace std;

// variabel global
int n, pilihan;

// cek bilangan prima
bool cekPrima(int x) {
       if (x <= 1) {
        return false;
    }

    int i = 2;
    while (i <= x / 2) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// cek bilangan fibonacci
bool cekFibonacci(int x) {
    int a = 0, b = 1, c = 0;

    while (c <= x) {
        if (c == x) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// input angka
void input() {
    cout << "Masukkan angka: ";
    cin >> n;
}


// tampil hasil prima
void hasilPrima() {
        if (cekPrima(n)) {
        cout << "Bilangan prima" << endl;
        } else {
        cout << "Bukan bilangan prima" << endl;
    }
}

// tampil hasil fibonacci
void hasilFibo() {
    if (cekFibonacci(n)) {
        cout << "Termasuk Fibonacci" << endl;
    } else {
        cout << "Bukan Fibonacci" << endl;
    }
}


// menu
void tampilMenu() {
    cout << "\nMenu:\n";
    cout << "1. Cek Prima\n";
    cout << "2. Cek Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih 1,2,0: ";
    cin >> pilihan;
}

int main() {
        while (true) {
        tampilMenu();
        
        switch (pilihan) {
        case 1:
        input();
        hasilPrima();
        break;

        case 2:
        input();
        hasilFibo();
        break;
