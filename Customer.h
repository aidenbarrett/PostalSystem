#pragma once
//
//  PostalSystem
//  Customer.h
//  
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>
#include "Letter.h"
#include "PostOffice.h"

using namespace std;

class Customer : public LetterExchange {
public:
    Customer(int id, Letter& letter, string deliveryAddress, string returnAddress, PostOffice& postOffice)
    : id(id), letter(letter), deliveryAddress(deliveryAddress), returnAddress(returnAddress), postOffice(postOffice), sent(sent), received(received) { }
    
    void changePostOffice(PostOffice& postOffice);
    
    void sendLetters();
    
    //Setters/Getters
    void setSent();
    void setReceived();
    
    bool getSent();
    bool getReceived();
    string getDeliveryAddress();
    
private:
    Letter& letter;
    PostOffice& postOffice;
    
    string deliveryAddress;
    string returnAddress;
    
    int id;
    bool sent;
    bool received;
};
