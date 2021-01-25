#include <iostream>

using namespace std;

int main()
{
    int stars = 1;
    int treesize = 1;
    int inputsize = 0;

    cout << "Enter size of the christmas tree: ";
    cin >> treesize;
    inputsize = treesize;

    while(inputsize > 0){
        for(int i = 0; i < inputsize-1; i++){
            cout << " ";
        }
        for(int loop = 0; loop < stars; loop++){
            cout << "*";
        }

        stars+=2;
        inputsize--;
        cout << "\n";
    }
    for(int i =(stars-2)/2; i>0; i--){
        cout << " ";
    }
    cout << "*" << endl;
}
