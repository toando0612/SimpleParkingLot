//
//  LinkedList.cpp
//  Prepare
//
//  Created by Toan Do on 5/15/19.
//  Copyright © 2019 Toan Do. All rights reserved.
//

#include "LinkedList.hpp"

LinkedList::LinkedList() {
    //with Clion and Terminal head is not NULL at the beginning occurred error at run time
    //with Xcode head is NULL at the beginning not occurred error at run time
    //force head to NULL to avoid error any way
    head = NULL;
}

//reverse
void LinkedList::reverseLot(){
    // Initialize current, previous and
    // next pointers
    park* current = head;
    park* prev = NULL;
    park* next = NULL;
    
    
    while (current != NULL)
    {
        // Store next
        next = current->getNext();
        
        // Reverse current node's pointer
        current->setNext(prev);
        
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}


//first in list
void LinkedList::populateFirstInLot(){
    park* temp=new park;
    temp = head;
    head = head->getNext();
    delete temp;

}

//last in list
void LinkedList::populateLastInLot(){
    park* current = new park;
    park* previous = new park;
    current = head;
    while(current->getNext()!=NULL)
    {
        previous=current;
        current = current-> getNext();
    }
    tail = previous;
    previous->setNext(NULL);
    delete current;
    
}

//position in list
void LinkedList::populatePositionInLot(int position){
    park* current  = new park;
    current = head;
    for(int i = 1; i < position; i++)
    {
        current = current->getNext();
    }
//    previous->setNext(current->getNext());
    current->setRegistration("");

}

//addBike : add to
void LinkedList::addBike(string name){
    park* newBike = new park(name);
    newBike->setNext(NULL);
    newBike->setRegistration(name);
    
    int order = tail->getNumber() + 1;
    newBike->setNumber(order);
    tail->setNext(newBike);
    tail = newBike;
}
//DisplayList
void LinkedList::displayLot(){
    park* move = new park;
    move = head;
    while(move!=NULL)
    {
        cout << move->getNumber()<< "-"<<  move->getRegistration()<<"   ";
        move = move->getNext();
    }
    cout << "\n";
}
//delete List
void LinkedList::resetLot(){
    while (head!=NULL) { //remove bike one by one
        populateFirstInLot();
    }
}

int LinkedList::addAvailable(string name){
    if(check(head)){
        cout << "head is NULL" << endl;
    }else{
        cout << "head is not NULL" << endl;

    }
    if(head==NULL)
    {
        park* newBike = new park;
        newBike->setNumber(1);
        newBike->setNext(NULL);
        newBike->setRegistration(name);
        head = newBike;
        tail = newBike;
        newBike = NULL;
    }else{
        park* move = new park;
        move = head;
        while (move!=NULL) {
            if (move->getRegistration() == "") {
                move->setRegistration(name);
                return 0;
            }
            move = move->getNext();
        }
        addBike(name);
    }
    
    return 0;
}
int LinkedList::searchBike(string name){
    park* move = new park;
    move = head;
    while (move!=NULL) {
        if (move->getRegistration() == name) {
            return move->getNumber();
        }
        move = move->getNext();
    }
    cout << name << " is not available at Parking Lot!" << endl;
    return 0;
}

park *LinkedList::getHead() const {
    return head;
}

void LinkedList::setHead(park *head) {
    LinkedList::head = head;
}

park *LinkedList::getTail() const {
    return tail;
}

void LinkedList::setTail(park *tail) {
    LinkedList::tail = tail;
}

bool LinkedList::check(park* a){
    if( head == NULL){
        return true;
    }else
    {
        return false;
    }
}




