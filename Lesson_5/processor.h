#ifndef PROCESSOR_H
#define PROCESSOR_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class processor
{
public:
    processor();

    //name
    string setProcName(string name){return procName = name;}
    string getProcName(){return procName;}
    //model
    string setProcModel(string model){return procMod = model;}
    string getProcModel(){return procMod;}
    //soket
    string setProcSoket(string soket){return procSoket = soket;}
    string getProcSoket(){return procSoket;}
    //freq
    string setProcFreq(string freq){return procFreq = freq;}
    string getProcFreq(){return procFreq;}
    //price
    void setProcPrice(double price);
    double getProcPrice(){return procPrice;}
    //bench
    double setProcBench(double bench){return procBench = bench;}
    double getProcBench(){return procBench;}

    void listAllProc();
    void addProc(string name, string model, string soket, string freq, double price, double bench);
private:
    string procName;
    string procMod;
    string procSoket;
    string procFreq;
    double procPrice = 0;
    double procBench = 0;

    vector<processor> processors;
};

#endif // PROCESSOR_H
