#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <string>
#include <vector>

using namespace std;

class motherboard
{
public:
    motherboard();

    //name
    string setMbName(string name){return mbName = name;}
    string getMbName(){return mbName;}
    //model
    string setMbModel(string model){return mbModel = model;}
    string getMbModel(){return mbModel;}
    //mbSoket
    string setMbSocket(string socket){return mbSocket = socket;}
    string getMbSocket(){return mbSocket;}
    //price
    void setMbPrice(double price);
    double getMbPrice(){return mbPrice;}

    void addMb(string name, string model, string socket, double price);
    void listAllMb();

private:
    string mbName;
    string mbModel;
    string mbSocket;
    double mbPrice;

    vector<motherboard> mbArray;
};

#endif // MOTHERBOARD_H
