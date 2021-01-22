#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
    int endarray = -1;
    int arraynumbers[20];
    int loop = 0;
=======
    int endarray = 0;
    int arraynumbers[20];
    int input = 0;
>>>>>>> 5b83837... add task_3

    for(int i = 0; i < 20; i++){
        arraynumbers[i] = 0;
    }
<<<<<<< HEAD

    do{
        endarray++;
        cout << "Enter number: " << endl;
        cin >> arraynumbers[endarray];
    }while(endarray < 20 && arraynumbers[endarray] > 0);

=======
    for(int i = 0; i < 20; i++){
        do{
            cout << "Enter number: " << endl;
            cin >> arraynumbers[i];
        }while(input < 0);

        if(arraynumbers[i] == 0){
            endarray = i;
            break;
        }
    }
>>>>>>> 5b83837... add task_3
    for (int i = 0; i < endarray; i++){
        for(int spaces = 0; spaces <= ((endarray - arraynumbers[i] + 1)/2); spaces++){
            cout << " ";
        }
        for (int star = 0; star < arraynumbers[i]; star++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
