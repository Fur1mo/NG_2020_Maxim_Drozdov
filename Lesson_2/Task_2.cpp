#include <iostream>

using namespace std;

int main()
{
    double allcards[10];
    int inpcard = 0;
    double inpmoney = 0;
    double sum = 0;

    for(int i = 0; i < 10; i++){
        allcards[i] = 0;
    }
    for(;;){
        cout << "vvedite nomer kartochki: " << endl;
        cin >> inpcard;
        cout << "skolko polozhit?: " << endl;
        cin >> inpmoney;
        allcards[inpcard-1] = inpmoney;

        for(int i = 0; i < 10; i++){
            cout << allcards[i] << " ";
        }
        cout << "\n";

        for(int i = 0; i < 10; i++){
            sum = sum + allcards[i];
        }
        cout << "na vseh kartah: " << sum << endl;
        sum = 0;
    }
}
