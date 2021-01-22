#include <iostream>

using namespace std;

int main()
{
    int first = 0;
    int second = 0;
    int deis = 0;

    cout << "Vvedite 1-oe chislo: " << endl;
    cin >> first;
    cout << "Vvedite 2-oe chislo: " << endl;
    cin >> second;
    cout << "-------------------" << endl;
    cout << "1 - summa" << endl;
    cout << "2 - raznica" << endl;
    cout << "3 - umnogenie" << endl;
    cout << "4 - delenie" << endl;
    cout << "-------------------" << endl;
    cout << "Vvedite deistwie: " << endl;
    cin >> deis;
    cout << "Otvet = ";

    if(deis == 1){
        cout << first + second;
    }
    if(deis == 2){
        cout << first - second;
    }
    if(deis == 3){
        cout << first * second;
    }
    if(deis == 4){
        cout << first / second;
    }
    if(deis > 4){
        cout << "chislo ne mojet bit` bolshe 4-h";
    }
    if(deis < 1)
    {
        cout << "chislo ne mojet bit` menshe 1-go";
    }
}
