#include <iostream>
using namespace std;

void And(int input){
    for (int i = 0; i < 8; i++){
        cout << ((i >> 2) & 1)
             << ((i >> 1) & 1)
             << (i & 1) << endl;
    }
}


int main(){
    int input;
    
    cout<<"Selamat Datang Di Pusat Informasi Tabel Kebenaran\n\n";
    cout<<"1. AND\n2. OR\n3. NOT\n4. NAND\n5. NOR\n6. XOR\n7. XNOR\n";
    cout<<"Silahkan Pilih Gerbang Logika yang Anda Inginkan : ";
    cin>>input;
    
    switch (input){
    case 1: And(input); break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    case 7:
        
        break;
    case 8:
        
        break;
    default:
        break;
    }
}