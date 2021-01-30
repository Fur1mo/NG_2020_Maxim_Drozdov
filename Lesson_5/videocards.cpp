#include "videocards.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

videocards::videocards()
{

}

void videocards::setCardPrice(double price)
{
    if(price < 0){
        cout << "error: price 0. price set to 0." << endl;
        videocardPrice = 0;
    }else{
        videocardPrice = price;
    }
}

void videocards::getVideocard(int numberVid)
{
    cout << videocard.at(numberVid) << endl;
}

void videocards::listAllCard()
{
    cout << "There are" << " " << videocard.size() << " " << "videocards known" << endl;
    for(videocards vid : videocard){
        cout << vid.getCardName() << "\t" << vid.getCardFam() << "\t" << vid.getCardBench() << "\t" << vid.getCardPrice() << endl;
    }
}

void videocards::addVideocard(string name, string fam, double price, double bench)
{
   videocards vid;
   vid.setCardName(name);
   vid.setCardFam(fam);
   vid.setCardPrice(price);
   vid.setCardBench(bench);

   videocard.push_back(vid);
}
