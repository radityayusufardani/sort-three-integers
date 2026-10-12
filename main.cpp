#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    cout << "Urutan dari kecil ke besar: " << a << " " << b << " " << c << endl;
    return 0;
}
