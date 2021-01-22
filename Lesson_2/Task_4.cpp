#include <iostream>

using namespace std;

int main()
{
    int star[5];
    int loop = 0;
    int max = 0;

    for(int stolb = 0; stolb < 5; stolb++){
        cout << "звездочек в " << stolb+1 << "-ом " << "стобике: ";
        cin >> star[stolb];

        if(star[stolb]>max){
            max = stolb;
        }
    }

    while(star[max] > loop){

        for(int stolb = 0; stolb < 5; stolb++){
            if (star[stolb] > loop){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        loop++;
        cout << endl;
    }
}
