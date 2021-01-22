#include <iostream>

using namespace std;

int main()
{
    int in = 0;
    int out = 0;

    cout << "Vvedite chislo: ";
    cin >> in;

    while(out<in){
        cout << out;
        cout << ",";
        out++;
    }
    cout << in;
}
