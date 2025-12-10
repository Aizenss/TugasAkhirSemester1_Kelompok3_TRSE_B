#include <iostream>
#include <iomanip>
using namespace std;

void And(){
    cout << "Tabel Kebenaran AND\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
            cout << left << setw(5) << i << setw(5) << j << " | " << (i && j) << endl;
        }
    }
    cout<<"Gerbang logika AND adalah gerbang logika dasar dalam elektronika digital \nyang menghasilkan keluaran TINGGI (1) hanya jika semua masukannya juga TINGGI (1), \ndan akan menghasilkan keluaran RENDAH (0) jika salah satu atau semua masukannya RENDAH (0). \nSederhananya, gerbang ini berfungsi seperti operasi DAN (konjungsi logis) di mana semua kondisi \nharus terpenuhi (bernilai 1) agar hasilnya benar (bernilai 1)."<<endl;
}

void Or (){
    cout<<"Tabel Kebenaran Gebang Logika OR"<<endl;
    cout<<left<<setw(5)<<"B"<<setw(5)<<"A"<<" | "<<"Output\n";
    cout<<"---------------"<<endl;
    for (int i = 0; i <= 1; i++){
            for(int j= 1; j>=0; j--){
               cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< (i || j) <<endl;
            }
    }
    cout<<"\nGerbang Logika OR adalah gerbang yang menggunakan operasi logika perkalian. \nKetika inputan 1 dengan 0 maka hasilnya yaitu 0, hasil outputan 1 ketika kedua inputnya bernilai 1. \nhasil outputan 0 ketika salah satu inputannya bernilai 0."<<endl;
}

void Not(){
    cout << "Tabel Kebenaran NOT\n";
    cout << left << setw(5) << "A" << " | Output\n";
    cout << "-------------------\n";
    for (int a = 0; a <= 1; a++){
        cout << left << setw(5) << a << " | " << (!a) << endl;
    }
    cout<<"\nGerbang logika NOT adalah gerbang yang berfungsi membalikkan sinyal input. \nJika input bernilai 1 maka outputnya 0, dan jika input 0 maka outputnya 1. \nGerbang ini dikenal sebagai inverter dan menjadi dasar dalam membangun rangkaian digital kompleks."<<endl;
}

void Nand(){
    cout<<"Tabel Kebenaran Gerbang Logika NAND"<<endl;
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout<<"---------------------"<<endl;
    for (int i = 0; i <= 1; i++){
        for (int j = 1; j>=0; j--){
            cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< !(i && j) <<endl;

        }
    }
    cout<<"\nGerbang Logika NAND ini adalah invers atau kebalikan dari gerbang AND. \nGerbang NAND membutuhkan 2 inputan agar menghasilkan 1 outputan. \nGerbang logika NAND menggunakan operasi penjumlahan biner, \njadi ketika 1 + 1 maka hasilnya 1 namun dikarenakan di invers maka hasil yang dikeluarkan yaitu menjadi 0."<<endl;
}

void Nor(){
    cout << "Tabel Kebenaran NOR\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
            cout << left << setw(5) << i << setw(5) << j << " | " << (i && j) << endl;
        }
    }
    cout<<"\nGerbang NOR menghasilkan keluaran 1 hanya jika semua masukan bernilai 0. \nJika salah satu atau kedua input bernilai 1, maka output bernilai 0. \nGerbang NOR adalah kebalikan dari OR dan merupakan salah satu gerbang universal, \nsehingga dapat membentuk semua fungsi logika lain seperti AND, OR, dan NOT. \nNOR sangat penting dalam membangun memori (latch/flip-flop) serta \nlogika kontrol pada sistem digital kompleks seperti komputer dan robotika."<<endl;
}

void Xor(){
    cout << "Tabel Kebenaran XOR\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
            cout << left << setw(5) << i << setw(5) << j << " | " << (i ^ j) << endl;
        }
    }
    cout << "\nGerbang XOR adalah singkatan dari Exclusive OR, Berbeda dengan gerbang OR biasa \nyang bernilai 1 jika salah satu atau keduanya inputnya bernilai 1, XOR bersifat \neksklusif. Artinya, ia hanya akan menghasilkan output 1 jika salah satu inputnya \nbernilai 1, dan jika kedua inputnya bernilai sama 1 atau 0 maka outputnya bernilai 0"<<endl;
}

void Xnor(){
    cout << "Tabel Kebenaran XNOR\n";
    cout << left << setw(5) << "B" << setw(5) << "A" << " | " << "Output\n";
    cout << "------------------------\n";
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
            cout << left << setw(5) << i << setw(5) << j << " | " << !(i ^ j) << endl;
        }
    }
    cout << "\nXNOR adalah kebalikan dari XOR. XNOR merupakan gabungan dari gerbang XOR \nyang diikuti oleh gerbang NOT.Karena itu, gerbang ini sering disebut sebagai \nEquivalence Gate, gerbang Xnor akan menghasilkan output 1 jika kedua input \nbernilai sama 1 atau 0 dan jika salah satu input berbeda 1 atau 0 maka outputnya bernilai 0"<<endl;
}

int main(){
    int input;
    char answer;
    bool status = true;

    cout << "Selamat Datang Di Pusat Informasi Tabel Kebenaran";

jump:
    cout << "\n\n1. AND\n2. OR\n3. NOT\n4. NAND\n5. NOR\n6. XOR\n7. XNOR\n";
    cout << "Silahkan Pilih Gerbang Logika yang Anda Inginkan : ";
    cin >> input;
    cout << "\n\n";

    switch (input){
    case 1:
        And();
        status = true;
        break;
    case 2:
        Or();
        status = true;
        break;
    case 3:
        Not();
        status = true;
        break;
    case 4:
        Nand();
        status = true;
        break;
    case 5:
        Nor();
        status = true;
        break;
    case 6:
        Xor();
        status = true;
        break;
    case 7:
        Xnor();
        status = true;
        break;
    default:
        status = false;
        cout << "Pilihan Anda Tidak Tersedia";
        break;
    }

    if (status == true){
        cout << "\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
        cin >> answer;
        while (answer == 'Y' || answer == 'y'){
            goto jump;
        };
    }
}