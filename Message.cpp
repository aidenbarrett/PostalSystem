//
//  Messages.cpp
//  
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>

class Message {
public:
    Message(Customer customer, string messageContent)
    : customer(customer), messageContent(messageContent) { }
    
    // sending scenerio
    bool isSent();
    bool isPassedForDelivery();
    
    // receiving scenerio
    bool isPickedUp();
    bool isDelivered();
    
private:
    Customer customer;
    string messageContent;
    bool isSent;
    bool isPassed;
    bool isPickedUp;
    bool isDelivered;
    
};
