#include <iostream>
#include "Bag.h"
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    Bag b;
    bag_type anItem;

    cout << "Bag" << endl;
    b.addItem("Cevdet");
    b.addItem("Aslan");
    b.addItem("ORION");
    b.addItem("ORION");
    b.addItem("Hacettepe");

    cout << "Total Size " << b.getSize() << endl;

    cout << "Item has a freq of:" << b.getFreqOf("ORION") <<endl;

    b.removeItem("ORION");

    cout << "Total Size " << b.getSize() << endl;

    cout << "Item has a freq of: " << b.getFreqOf("ORION") <<endl;

}
