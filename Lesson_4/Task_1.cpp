#include <iostream>

using namespace std;

void zeroing(int size, int allCards[]){
    //int size = 10;
    for(int i = 0; i < size; i++){
        allCards[i] = 0;
    }
}

int inputCards(int inpCard){
    cout << "vvedite nomer kartochki: " << endl;
    cin >> inpCard;
    return inpCard;
}

int inputMoney(int inpCard,int allCards[]){
    int inpMoney = 0;
    cout << "skolko polozhit?: " << endl;
    cin >> inpMoney;
    return /*allCards[inpCard - 1] = */inpMoney + allCards[inpCard - 1];
}

void drawingWallets(int size, int allCards[]){
    for(int i = 0; i < size; i++){
        cout << allCards[i] << " ";
    }
    cout << "\n";
}

int calculateWallet(int size, int sum, int allCards[]){
    for(int i = 0; i < size; i++){
        sum = sum + allCards[i];
    }
    return sum;
}

void moneyAmount(int sum){
    cout << "na vseh kartah: " << sum << endl;
}

void ATM(){
    int size = 10;
    int allCards[size];
    int inpCard = 0;
    int sum = 0;

    zeroing(size, allCards);
    while(true){
        //inputCards(inpCard);
        inpCard = inputCards(inpCard);
        //inputMoney(inpCard, allCards);
        allCards[inpCard - 1] = inputMoney(inpCard, allCards);
        drawingWallets(size, allCards);
        //calculateWallet(size, sum, allCards);
        sum = calculateWallet(size, sum, allCards);
        moneyAmount(sum);
    }
}
int main()
{
    ATM();
}
