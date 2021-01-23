#include <iostream>

using namespace std;

int main()
{
    int size = 0;

    cout << "Enter size: " << endl;
    cin >> size;

    //square===============================
    for(int loop = 0; loop < size; loop++){

        for(int loop = 0; loop<size; loop++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //=====================================

    //left up==============================
    for(int loop = 0; loop < size; loop++){
        for(int i = -1; i < loop; i++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //=====================================

    //right up
    for(int loop = 0; loop < size; loop++){
        for(int j = size-1; loop < j; j--){
            cout << " ";
        }
        for(int i = -1; i < loop; i++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //=====================================

    //left down============================
    for(int loop = 0; loop < size; loop++){
        for(int i = size; loop < i; i--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //=====================================

    //right down===========================
    for(int loop = 0; loop < size; loop++){
        for(int j = 0; j < loop; j++){
            cout << " ";
        }
        for(int i = size; loop < i; i--){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    //=====================================
}
