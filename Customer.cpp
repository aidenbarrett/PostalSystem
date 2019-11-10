//
//  Customer.cpp
//  
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>

class Customer {
public:
    Customer(int id, Message message, string deliveryAddress, string returnAddress, bool sent = 0, bool received = 0, PostOffice postOffice = NULL)
    : id(id), message(message), deliveryAddress(deliveryAddress), returnAddress(returnAddress, sent(sent), received(received), postOffice(postOffice)) { }
    
    void visitPostOffice(PostOffice postOffice);
    void send();
    void receive();
    
    bool hasSent();
    bool hasReceived();
    
    void setSent();
    void setReceived();
    
private:
    Message message;
    PostOffice postOffice;
    string deliveryAddress;
    string returnAddress;
    int id;
    bool sent;
    bool received;
};
