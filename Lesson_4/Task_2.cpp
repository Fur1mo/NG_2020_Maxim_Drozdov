#include <iostream>

using namespace std;

bool rule1checker(bool rule1, char str[], int counter){
    rule1 = ((str[counter] >= 'A') && (str[counter] <= 'Z')) || ((str[counter] >= 'a') && (str[counter] <= 'z'));
    return rule1;
};

bool rule2checker(bool rule2, char str[], int counter){
    rule2 = !(((str[counter+1] >= 'A') && (str[counter+1] <= 'Z')) || ((str[counter+1] >= 'a') && (str[counter+1] <= 'z')));
    return rule2;
};

int wordCounter(bool rule1, bool rule2, int words){
    if(rule1 && rule2){
        words++;
    }
    return words;
}

void inputString(char str[]){
    cout << "Enter string: ";
    cin.getline(str, 256);
}

void outputResult(int words){
    cout << "Result: " << words << endl;
}

int main()
{
    char str[256];
    int words = 0;
    int counter = 0;
    bool rule1; //= rule1checker(rule1, str, counter);
    bool rule2; // = rule2checker(rule2, str, counter);

    inputString(str);

    while(str[counter] != 0){
        rule1 = rule1checker(rule1, str, counter);
        rule2 = rule2checker(rule2, str, counter);
        words = wordCounter(rule1, rule2, words);
        counter++;
    }
    outputResult(words);
}
