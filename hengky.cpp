#include <iostream>
#include <iomanip>
using namespace std;

void OR (){
    cout<<"Tabel Kebenaran Gebang Logika OR"<<endl;
    cout<<left<<setw(5)<<"B"<<setw(5)<<"A"<<" | "<<"Output\n";
    cout<<"---------------"<<endl;
    for (int i = 0; i <= 1; i++){
            for(int j= 1; j>=0; j--){
               cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< (i || j) <<endl;
            }
    }
    cout<<"Gerbang Logika OR adalah gerbang yang menggunakan operasi logika perkalian. Ketika inputan 1 dengan 0 maka hasilnya yaitu 0, hasil outputan 1 ketika kedua inputnya bernilai 1. hasil outputan 0 ketika salah satu inputannya bernilai 0."<<endl;
}

void NAND(){
    cout<<"Tabel Kebenaran Gerbang Logika NAND"<<endl;
    cout<<left<<setw(4)<<"A"<<setw(4)<<"B"<<" | "<<"Output"<<endl;
    cout<<"---------------------"<<endl;
    for (int i = 0; i <= 1; i++){
        for (int j = 1; j>=0; j--){
            cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< !(i && j) <<endl;

        }
    }
    cout<<"Gerbang Logika NAND ini adalah invers atau kebalikan dari gerbang AND. Gerbang NAND membutuhkan 2 inputan agar menghasilkan 1 outputan. Gerbang logika NAND menggunakan operasi penjumlahan biner, jadi ketika 1 + 1 maka hasilnya 1 namun dikarenakan di invers maka hasil yang dikeluarkan yaitu menjadi 0."<<endl;
}


int main(){
    int input;
    char answer;

    cout<<"Selamat Datang Di Pusat Informasi Tabel Kebenaran";

    jump :  cout<<"\n\n1. AND\n2. OR\n3. NOT\n4. NAND\n5. NOR\n6. XOR\n7. XNOR\n";
            cout<<"Silahkan Pilih Gerbang Logika yang Anda Inginkan : ";
            cin>>input;
            cout<<"\n\n";

    switch (input){
    case 2:
        OR();
        cout<<"\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
        cin>>answer;
        while (answer == 'Y' || answer == 'y'){
            goto jump;
        }; break;

    case 4:
        NAND();
        cout<<"\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
        cin>>answer;
        while (answer == 'Y' || answer == 'y'){
            goto jump;
        }; break;
    default: cout<<"Pilihan Anda Tidak Tersedia"; break;
    }
}
