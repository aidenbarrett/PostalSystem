#pragma once
//
//  PostalSystem
//  Letter.h
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>
#include "Customer.h"

using namespace std;

class Letter {
public:
    Letter(Customer& customer, string letterContent)
    : customer(customer), letterContent(letterContent), isSent(false), isPassed(false), isPickedUp(false), isDelivered(false), isOutBound(false) { }
    
    // sending scenerio
    bool isSent();
    bool isPassedForDelivery();
    
    // receiving scenerio
    bool isPickedUp();
    bool isDelivered();
    
    bool isOutbound();
    
    void setOutbound(bool isOutbound);
    
private:
    Customer& customer;
    string letterContent;
    bool isSent;
    bool isPassed;
    bool isPickedUp;
    bool isDelivered;
    bool isOutbound;
    
};
