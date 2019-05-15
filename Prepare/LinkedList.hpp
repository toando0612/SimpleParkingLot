//
//  LinkedList.hpp
//  Prepare
//
//  Created by Toan Do on 5/15/19.
//  Copyright © 2019 Toan Do. All rights reserved.
//

#define LinkedList_hpp

#include "park.hpp"

class LinkedList {
    park* head;
    park* tail;
public:
    LinkedList();
    //reverse
    void reverseLot();
    //populate
    void populateLot();
    //first in list
    void populateFirstInLot();
    //last in list
    void populateLastInLot();
    //position in list
    void populatePositionInLot(int position);
    
    //addBike
    void addBike(string name);
    //DisplayList
    void displayLot();
    //delete List
    void resetLot();
    
    //add in available slot
    int addAvailable(string name);
    
    //search a bike return position
    int searchBike(string name);

    park *getHead() const;

    void setHead(park *head);

    park *getTail() const;

    void setTail(park *tail);

    bool check(park* a);

};
