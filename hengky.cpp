#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<"Tabel Kebenaran Gebang Logika OR"<<endl;
    cout<<left<<setw(6)<<"A"<<setw(6)<<"B"<<" | "<<"Y"<<endl;
    cout<<"---------------"<<endl;
    for (int i = 0; i <= 1; i++){
            for(int j= 1; j>=0; j--){
               cout<<left<<setw(6)<<i<<setw(6)<<j<<" | "<< (i || j) <<endl;
            }
    }
    cout<<endl;

    cout<<"Tabel Kebenaran Gerbang Logika NAND"<<endl;
    cout<<left<<setw(5)<<"A"<<setw(5)<<"B"<<" | "<<"Y"<<endl;
    cout<<"---------------------"<<endl;
    for (int i = 0; i <= 1; i++){
        for (int j = 1; j>=0; j--){
            cout<<left<<setw(5)<<i<<setw(5)<<j<<" | "<< !(i && j) <<endl;
        }
    }
}
