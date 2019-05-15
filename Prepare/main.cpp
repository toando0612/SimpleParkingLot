//
//  main.cpp
//  Prepare
//
//  Created by Toan Do on 5/15/19.
//  Copyright © 2019 Toan Do. All rights reserved.
//

#include <iostream>
#include "LinkedList.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    LinkedList* aList = new LinkedList();

    aList->addAvailable("SH123");
    cout<< "add SH123 : ";
    aList->displayLot();

    aList->addAvailable("AB123");
    cout<< "add AB123 : ";
    aList->displayLot();

    aList->addAvailable("VISION123");
    cout<< "add VISION123 : ";
    aList->displayLot();

    aList->addAvailable("VISION12366");
    cout<< "add VISION12366 : ";
    aList->displayLot();
    


    aList->populatePositionInLot(2);
    cout<< "remove AB123 : ";
    aList->displayLot();

    aList->populatePositionInLot(3);
    cout<< "remove VISION123 : ";
    aList->displayLot();

    aList->addAvailable("SH150");
    cout<< "add SH150 : ";
    aList->displayLot();

    aList->addAvailable("SH125");
    cout<< "add SH125 : ";
    aList->displayLot();

    aList->addAvailable("Winner150");
    cout<< "add Winner150 : ";
    aList->displayLot();

    int found = aList->searchBike("VISION12366");
    cout<< "search for VISION12366...." << endl;
    aList->populatePositionInLot(found);
    cout<< "remove VISION12366 : ";
    aList->displayLot();

    aList->resetLot();
    cout << "reset Parking Lot...." << endl;
    cout << "After reset : ";
    aList->displayLot();

    



    
    

    
    
    return 0;
}
