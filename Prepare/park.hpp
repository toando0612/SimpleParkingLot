//
//  park.hpp
//  Prepare
//
//  Created by Toan Do on 5/15/19.
//  Copyright © 2019 Toan Do. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <iostream>

#pragma once

using namespace std;

class park {
private:
    int number;
    string registration;
    park *next;
public:
    
    park(string newName);
    
    park();
    
    virtual ~park();

    int getNumber() const;

    void setNumber(int number);

    const string &getRegistration() const;

    void setRegistration(const string &registration);

    park *getNext() const;
    
    void setNext(park *next);

};


#endif /* Node_hpp */

