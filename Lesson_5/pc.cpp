/*#include "pc.h"
#include "videocards.h"
#include "processor.h"
#include "motherboard.h"

using namespace std;

pc::pc()
{

}

bool pc::compatibility(string pr, string mb)
{
    bool compat;
    processor prr;
    motherboard mbb;
    string prsoc = prr.getProcSoket();
    string mbsoc = mbb.getMbSocket();
    if (prsoc != mbsoc){
        cout << "Error! Components ate incompatible" << endl;
        compat = false;
    }else{
        compat = true;
    }
    return cmp = compat;
}

void pc::pcPicker(string proc, string motherb, string video)
{
    string pickVd;
    string pickPr;
    string pickMb;
    //videocards vd;
    //motherboard mb;
    processor pr;

    cout << "select videocard: ";
    cin >> pickVd;
    /*for(videocards vd : videocard){

    }

    cout << "select processor: ";
    cin >> pickPr;

    cout << "select motherboard: ";
    cin >> pickMb;

    compatibility();
}*/
