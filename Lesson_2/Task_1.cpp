#include <iostream>

using namespace std;

int main()
{

    int numbersc[10];
    int youshkol = 0;
    int loop = -1;

    for (int i = 0; i < 10; i++){
        cout << "Vvedite nomer shkoli: ";
        cin >> numbersc[i];
    }

    cout << "Vvedite nomer vashei shkoli: ";
    cin >> youshkol;

    while(numbersc[loop] != youshkol && loop < 10){
        loop++;
        if (numbersc[loop] == youshkol){
            cout << "ya znau etu skolu" << endl;
        }
    }
    if (numbersc[loop] != youshkol){
        cout << "ya ne znau etu skolu" << endl;
    }
}
