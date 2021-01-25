#include <iostream>

using namespace std;

int main()
{
    int sizeStr = 256;
    char string[sizeStr];
    int currentWord = 0;
    int counter = 0;
    int greatestValue = 0;
    bool rule1;
    int posGreatestValue = 0;

    cout << "Enter string: ";
    cin.getline(string,sizeStr);

    while(string[counter] !='\0'){
        rule1 = ((string[counter] >= 'A') && (string[counter] <= 'Z')) || ((string[counter] >= 'a') && (string[counter] <= 'z'));

        if(rule1){
            currentWord++;
            counter++;
            if(currentWord > greatestValue){
                greatestValue = currentWord;
                posGreatestValue = counter-greatestValue;
            }
        }
        else{
            currentWord = 0;
            counter++;
        }
    }
    cout << "Result:";
    for(int i = 0; i < greatestValue; i++){
        cout << string[posGreatestValue+i];
    }
    cout << endl;
}
