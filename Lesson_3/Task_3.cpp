#include <iostream>

using namespace std;

int main()
{
    int size = 256;
    char str[size];
    bool cond1;
    int counter = 0;

    cout << "Enter string: ";
    cin.getline(str,size);

    while(str[counter] != 0){
        cond1 = ((str[counter] >= 'a') && (str[counter] <= 'z'));
        if(cond1){
            str[counter] = str[counter]-32;
        }
        counter++;
    }
    cout << str << endl;
}
