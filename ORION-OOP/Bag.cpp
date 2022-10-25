//
// Created by cevdt on 25.10.2022.
//

#include "Bag.h"


Bag::Bag() { // constructor
    itemCount =0;
}

void Bag::clear() {
    itemCount=0;
}

bool Bag::addItem(bag_type anItem) {

    bool reply;
    if (itemCount < 20){
        data[itemCount]=anItem;
        reply=true;
        itemCount++;
    } else {
        reply= false;
    }
    return reply;
}

bool Bag::contains(bag_type anItem) {
    bool reply=false;
    int curIndex;
    for (curIndex = 0; curIndex < (itemCount && (!reply)) ; ++curIndex)
        if(data[curIndex] == anItem) reply = true;
        return reply;
}

int Bag::getFreqOf(bag_type anItem) {
    int freq=0;
    int curIndex;
    for (curIndex=0;curIndex < itemCount;curIndex++)
        if(data[curIndex]==anItem) freq++;
    return freq;
}

bool Bag::removeItem(bag_type anItem) {
    bool reply = false;
    int curIndex;
    if(getFreqOf(anItem)==0) return reply;
    reply = true;
    curIndex = 0;
    while(data[curIndex] != anItem) curIndex++;
    for (curIndex;curIndex < itemCount; curIndex++){
        data[curIndex]=data[curIndex+1];}
    itemCount--;


}

int Bag::getSize() {
    return itemCount;
}











