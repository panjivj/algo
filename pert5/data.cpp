#include <iostream>
using namespace std;

void penjumlahan(){
    int a = 10;
    int b = 5;
    int c = a + b;
    cout << c << endl;
}
void loopingfor(){
    for (int a = 1; a <= 3; a++)
    {
        cout << a << endl;
    }
}
void sGoto(){
    int a = 2;
    genap:
        cout << "genap:" << endl;
    if (a % 2 == 0){
        goto genap;
    }
    else{
        cout << "ganjil" << endl;
    }
    // genap:
    //     cout << "genap" << endl;
    // ganjil:
    //     cout << "ganjil" << endl;
    // cout << "input angka : "<<endl;
    // cin >> a;


}

int main(){
    int pilih;
    char kembali;
    do
    {
        cout << "0. exit"<<endl;
        cout << "1. penjumlahan"<<endl;
        cout << "2. looping for"<<endl;
        cout << "pilihan : "<<endl;
        cin >> pilih;
        switch (pilih){
        case 0:
            /* code */
            cout << "terima kasih"<<endl;
            return 0;
        case 1:
            penjumlahan();
            break;
        case 2:
            loopingfor();
            break;
        case 3:
            sGoto();
            break;
        default:
            cout << "pilihan salah"<<endl;
            break;
        }
        cout << "pilih kembali?"<<endl;
        cin >> kembali;
    } while (kembali != 't');
    cout << "kembali" << endl;
    cin >> kembali;
   
    return 0;
}