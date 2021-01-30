#include "processor.h"

processor::processor()
{

}

void processor::setProcPrice(double price)
{
    if(price < 0){
        cout << "error: price < 0. price set to 0." << endl;
        procPrice = 0;
    }else{
        procPrice = price;
    }
}

void processor::listAllProc()
{
    cout << "There are" << " " << processors.size() << " " << "videocards known" << endl;
    for(processor pro : processors){
        cout << pro.getProcName() << "\t" << pro.getProcModel() << "\t" << pro.getProcSoket() << "\t" << pro.getProcFreq() << "\t" << pro.getProcBench() << "\t" << pro.getProcPrice() << endl;
    }
}

void processor::addProc(string name, string model, string soket, string freq, double price, double bench)
{
    processor pro1;
    pro1.setProcName(name);
    pro1.setProcModel(model);
    pro1.setProcSoket(soket);
    pro1.setProcBench(bench);
    pro1.setProcFreq(freq);
    pro1.setProcPrice(price);

    processors.push_back(pro1);
}
