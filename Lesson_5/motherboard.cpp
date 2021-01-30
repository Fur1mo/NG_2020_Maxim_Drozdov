#include "motherboard.h"
#include <iostream>
#include <string>

using namespace std;

motherboard::motherboard()
{

}

void motherboard::setMbPrice(double price)
{
    if(price < 0){
        cout << "error: price < 0. price set to 0." << endl;
        mbPrice = 0;
    }else{
        mbPrice = price;
    }
}

void motherboard::addMb(string name, string model, string socket, double price)
{
    motherboard mb1;
    mb1.setMbName(name);
    mb1.setMbModel(model);
    mb1.setMbSocket(socket);
    mb1.setMbPrice(price);

    mbArray.push_back(mb1);
}

void motherboard::listAllMb()
{
     cout << "There are" << " " << mbArray.size() << " " << "videocards known" << endl;
     for(motherboard mb : mbArray){
         cout << mb.getMbName() << "\t" << mb.getMbModel() << "\t" << mb.getMbSocket() << "\t" << mb.getMbPrice() << endl;
     }
}
