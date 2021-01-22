#include <iostream>

using namespace std;

int main()
{
    int zp = 0;

    cout << "Ckol`ko ti zarobativayesh?" << endl;
    cin >> zp;

    if(zp < 1000){
        cout << "Rabotai bolshe!" << endl;
    }
    if(999 < zp){
        
            if(zp < 1000000){
                cout << "Tak derzhiat, krasav4ik!" << endl;
            }
        
            if(zp > 999999){
                cout << "Tu millioner!" << endl;
            }
    }
    cout << "no tu molodec!";
}
