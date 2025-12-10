#include <iostream>
#include <iomanip>
using namespace std;

void XorGate() {
    cout << "Tabel Kebenaran XOR\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << left << setw(5) << i << setw(5) << j << " | " << (i ^ j) << endl;
        }
    }
    cout << "\nGerbang XOR adalah singkatan dari Exclusive OR, Berbeda dengan gerbang OR biasa \nyang bernilai 1 jika salah satu atau keduanya inputnya bernilai 1, XOR bersifat \neksklusif. Artinya, ia hanya akan menghasilkan output 1 jika salah satu inputnya \nbernilai 1, dan jika kedua inputnya bernilai sama 1 atau 0 maka outputnya bernilai 0"<<endl;
}

void XnorGate() {
    cout << "Tabel Kebenaran XNOR\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << left << setw(5) << i << setw(5) << j << " | " << !(i ^ j) << endl;
        }
    }
    cout << "\nXNOR adalah kebalikan dari XOR. XNOR merupakan gabungan dari gerbang XOR \nyang diikuti oleh gerbang NOT.Karena itu, gerbang ini sering disebut sebagai \nEquivalence Gate, gerbang Xnor akan menghasilkan output 1 jika kedua input \nbernilai sama 1 atau 0 dan jika salah satu input berbeda 1 atau 0 maka outputnya bernilai 0"<<endl;
}

int main() {
    int input;
    char answer;

    cout << "Selamat Datang Di Pusat Informasi Tabel Kebenaran";

jump:  cout << "\n\n1. AND\n2. OR\n3. NOT\n4. NAND\n5. NOR\n6. XOR\n7. XNOR\n";
    cout << "Silahkan Pilih Gerbang Logika yang Anda Inginkan : ";
    cin >> input;
    cout << "\n\n";

    switch (input) {
    case 6:
        XorGate();
        cout << "\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
        cin >> answer;
        while (answer == 'Y' || answer == 'y') {
            goto jump;
        }; break;
    case 7:
        XnorGate();
        cout << "\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
        cin >> answer;
        while (answer == 'Y' || answer == 'y') {
            goto jump;
        }; break;
    default: cout << "Pilihan Anda Tidak Tersedia"; break;
    }
}
