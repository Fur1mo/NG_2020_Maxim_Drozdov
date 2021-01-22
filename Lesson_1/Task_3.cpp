#include <iostream>

using namespace std;

int main()
{
    int orvsh = 0;
    int ornugn = 0;
    int shsob = 0;
    int orsobrala = 0;

    cout << "skolko oreshkov nugno belo4ke" << endl;
    cin >> ornugn;
    cout << "skolko oreshkov v shiske" << endl;
    cin >> orvsh;
    cout << "skolko shishek sobrala belo4ka" << endl;
    cin >> shsob;
    orsobrala = shsob * orvsh;
    cout << "Hvatit li oreshkov?" << endl;
    if (orsobrala >= ornugn){
        cout << "Yes";
    }

    if(orsobrala < ornugn){
        cout << "No" << endl;
        cout << "Belo4ka umerla...(press F)";
    }
}
