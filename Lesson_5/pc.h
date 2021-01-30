/*#ifndef PC_H
#define PC_H
#include <string>
#include <vector>
#include "motherboard.h"
#include "processor.h"
#include "videocards.h"

using namespace std;

class pc
{
public:
    pc();

    bool compatibility(string pr, string mb);
    void pcPicker(string proc, string motherb, string video);

private:
    string proc;
    string motherb;
    string video;
    bool cmp;

    vector<pc> computer;
};

#endif // PC_H
*/
