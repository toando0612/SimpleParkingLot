//
//  park.cpp
//  Prepare
//
//  Created by Toan Do on 5/15/19.
//  Copyright © 2019 Toan Do. All rights reserved.
//

#include "park.hpp"

#include <iostream>


park::park(string newName): registration(newName){}

park::park(){}


park::~park() {
    
}

park *park::getNext() const {
    return next;
}

void park::setNext(park *next) {
    park::next = next;
}

const string &park::getRegistration() const {
    return registration;
}

void park::setRegistration(const string &registration) {
    park::registration = registration;
}

int park::getNumber() const {
    return number;
}

void park::setNumber(int number) {
    park::number = number;
}
