#include <iostream>
#include "proxy.h"


using namespace std;

int main(int argc, char *argv[])
{
    SchoolGirl mm;
    mm.setName("����");

    Proxy daili(&mm);

    daili.giveFlowers();
    daili.giveDolls();
    daili.giveCholocate();


    return 0;
}
