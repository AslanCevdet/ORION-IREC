//
// Created by cevdt on 25.10.2022.
//

#ifndef ORION_OOP_BAG_H
#define ORION_OOP_BAG_H

#include <vector>
#include <string>

typedef std::string bag_type;

class Bag {
private:
    int itemCount;
    bag_type data[20];
public:
    Bag();
    bool addItem(bag_type anItem);
    bool removeItem(bag_type anItem);
    int getSize();
    void clear();
    bool contains(bag_type anItem);
    int getFreqOf(bag_type anItem);

};


#endif //ORION_OOP_BAG_H
