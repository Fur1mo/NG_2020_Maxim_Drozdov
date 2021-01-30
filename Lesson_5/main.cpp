#include <iostream>
#include "videocards.h"
#include "processor.h"
#include "motherboard.h"

using namespace std;

int main()
{
    videocards vid;
    vid.addVideocard("GTX 1050 TI", "10", 140, 2935);
    vid.addVideocard("GTX 1080 TI", "10", 300, 10024);
    vid.addVideocard("GTX 1660 TI", "16", 280, 5758);
    vid.addVideocard("GTX 2080 TI", "20", 1000, 14763);
    vid.addVideocard("GTX 2060", "20", 340,4778);
    vid.listAllCard();
    cout << "------------------" << endl;
    processor pro;
    pro.addProc("Intel", "g4560", "FCLGA1151", "3.5Ghz", 1, 65);
    pro.addProc("Intel", "i5-7400", "FCLGA1151", "3.0GHz", 1, 185);
    pro.addProc("Intel", "i5-9400f", "FCLGA1151", "2.9GHz", 1, 145);
    pro.addProc("AMD", "Ryzen 5 3600", "AM4", "3.6GHz", 1, 200);
    pro.addProc("AMD", "Ryzen 5 3400G", "AM4", "3.7GHz", 1, 150);
    pro.listAllProc();
    cout << "------------------" << endl;
    motherboard mb;
    mb.addMb("Gigabyte", "P310 D3", "FCLGA1151", 125);
    mb.addMb("Gigabyte", "H310M S2", "FCLGA1151", 50);
    mb.addMb("Gigabyte", "H310N", "FCLGA1151", 90);
    mb.addMb("Gigabyte", "GA-A320M-S2H", "AM4", 50);
    mb.addMb("Gigabyte", "B450M S2H V2", "AM4", 70);
    mb.listAllMb();

    cout << "enter videocard nubmer: ";
    int input = 0;
    cin >> input;
    vid.getVideocard(input);
}
