#include <iostream>

using namespace std;

int main()
{
    int stars = 1;
    int treeSize = 1;

    cout << "Enter size of the christmas tree: ";
    cin >> treeSize;

    for(int tempSize = treeSize; tempSize > 0; stars+=2, tempSize--){
        for(int space = 0; space < tempSize-1; space++){
            cout << " ";
        }
        for(int loopStars = 0; loopStars < stars; loopStars++){
            cout << "*";
        }

        cout << "\n";
    }
    for(int i =(stars-2)/2; i>0; i--){
        cout << " ";
    }
    cout << "*" << endl;
}
