#ifndef VIDEOCARDS_H
#define VIDEOCARDS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class videocards
{
public:
    videocards();

    //name
    string setCardName(string name){return videocardName = name;}
    string getCardName(){return videocardName;}
    //fam
    string setCardFam(string fam){return videocardFam = fam;}
    string getCardFam(){return videocardFam;}
    //price
    void setCardPrice(double price);
    double getCardPrice(){return videocardPrice;}
    //Parrot
    double setCardBench(double bench){return videocardBench = bench;}
    double getCardBench(){return videocardBench;}

    void getVideocard(int numberVid);

    void listAllCard();
    void addVideocard(string name, string fam, double price, double bench);

private:
    string videocardName;
    string videocardFam;
    double videocardPrice = 0;
    double videocardBench = 0;

    vector<videocards> videocard;
};

#endif // VIDEOCARDS_H
