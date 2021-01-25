#include <iostream>

using namespace std;

int main()
{
    int size = 256;
    char str[size];
    int counter = 0;
    int loop = 0;
    int temp = 0;
    bool cond1;
    int position = 0;

    cout << "Enter string: ";
    cin.getline(str,size);

    while(str[loop] !='\0'){
        cond1 = ((str[loop] >= 'A') && (str[loop] <= 'Z')) || ((str[loop] >= 'a') && (str[loop] <= 'z'));

        if(cond1){
            counter++;
            loop++;
            if(counter > temp){
                temp = counter;
                position = loop-temp;
            }
        }
        else{
            counter = 0;
            loop++;
        }
    }
    cout << "Result:";
    for(int i = 0; i < temp; i++){
        cout << str[position+i];
    }
    cout << endl;
}
