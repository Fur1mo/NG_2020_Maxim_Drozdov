#include <iostream>

using namespace std;

int main()
{
    int size = 256;
    char str[size];
    int counter = 0;
    int loop = 0;
    bool cond1, cond2;

    cout << "Enter string: ";
    cin.getline(str,size);

    while(str[loop] !='\0'){
        cond1 = ((str[loop] >= 'A') && (str[loop] <= 'Z')) || ((str[loop] >= 'a') && (str[loop] <= 'z'));
        cond2 = !(((str[loop+1] >= 'A') && (str[loop+1] <= 'Z')) || ((str[loop+1] >= 'a') && (str[loop+1] <= 'z')));
        if(cond1 && cond2){
            counter++;
        }
        loop++;
    }
    cout << counter;
}
