#include <iostream>
#include <iomanip>
using namespace std;

void Not(){
    cout<<"Tabel Kebenaran NOT\n";
    cout<<left<<setw(5)<<"A"<<" | Output\n";
    cout<<"-------------------\n";
    for (int a = 0; a <= 1; a++){
        cout<<left<<setw(5)<<a<<" | "<< (!a) <<endl;
    }
}

void Nor(){
    cout<<"Tabel Kebenaran NOR\n";
    cout<<left<<setw(5)<<"B"<<setw(5)<<"A"<<" | Output\n";
    cout<<"------------------------\n";
    for (int i = 0; i <= 1; i++){
        for (int j = 0; j <= 1; j++){
            cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< (i && j) <<endl;
        }
    }
}

void And(){
    cout<<"Tabel Kebenaran AND\n";
    cout<<left<<setw(5)<<"B"<<setw(5)<<"A"<<" | "<<"Output\n";
    cout<<"------------------------\n";
    for (int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< (i && j) <<endl;  
        }
    }
}

int main(){
    int input;
    char answer;

    cout<<"Selamat Datang Di Pusat Informasi Tabel Kebenaran";

    jump :  
        cout<<"\n\n1. AND\n2. OR\n3. NOT\n4. NAND\n5. NOR\n6. XOR\n7. XNOR\n";
        cout<<"Silahkan Pilih Gerbang Logika yang Anda Inginkan : ";
        cin>>input;
        cout<<"\n\n";

    switch (input){
    case 1: 
        And();
        break;
    case 3:
        Not();
        break;
    case 5:
        Nor();
        break;
    default: 
        cout<<"Pilihan Anda Tidak Tersedia";
        break;
    }

    cout<<"\nApakah Anda Ingin Melihat Tabel Kebenaran Dari Gerbang Logika Lainnya ? (Y/N) : ";
    cin>>answer;
    while (answer == 'Y' || answer == 'y'){
        goto jump;
    }

    return 0;
}
