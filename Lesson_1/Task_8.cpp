#include <iostream>

using namespace std;

int main()
{
    int stars = 1;
    int treesize = 1;
    int temp = 0;
    int space = 0;
    int stump = 0;

    cout << "Enter size of the christmas tree: ";
    cin >> treesize;

    while(treesize > 0){

        space = (treesize - 1);

        for(int i = 0; i < space; i++){
            cout << " ";
        }

        for(int loop = 0; loop < stars; loop++){
            cout << "*";
        }

        temp = stars;
        stars = stars + 2;
        treesize--;
        cout << "\n";
    }
    stump = (stars - 2)/2;

    while(stump>0){
        cout << " ";
        stump--;
    }
    cout << "*" << endl;
}
