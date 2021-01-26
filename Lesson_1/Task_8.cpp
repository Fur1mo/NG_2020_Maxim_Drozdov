#include <iostream>

using namespace std;

int main()
{
    int horizontalCounter = 0;
    int verticalCounter = 0;
    int treeSize = 0;

    cout << "Enter christmas tree size: ";
    cin >> treeSize;

    while (horizontalCounter-1 < treeSize){
        verticalCounter = 0;

        while(verticalCounter < treeSize - horizontalCounter){
            cout << ' ';
            verticalCounter++;
        }
        verticalCounter = 0;

        while(verticalCounter < horizontalCounter * 2 - 1){
            cout << '*';
            verticalCounter++;
        }
        cout << endl;
        horizontalCounter++;
    }
    verticalCounter = 0;
    while(verticalCounter < treeSize-1){
        cout << ' ';
        verticalCounter++;
    }
    cout << '*' << endl;
}
