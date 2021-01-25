#include <iostream>

using namespace std;

int main()
{
    int size = 256;
    char str[size];
    bool cond1;
    int loop = 0;

    cout << "Enter string: ";
    cin.getline(str,size);

    while(str[loop] != '\0'){
        cond1 = ((str[loop] >= 'A') && (str[loop] <= 'Z')) || ((str[loop] >= 'a') && (str[loop] <= 'z'));
        if(str[loop]>90 && cond1){
            str[loop] = str[loop]-32;
        }
        loop++;
    }
    cout << str;
}
