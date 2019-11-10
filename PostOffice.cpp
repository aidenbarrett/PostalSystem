//
//  PostOffice.cpp
//  
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>
#include <vector>

class PostOffice {
public:
    PostOffice(Message& message) : message(message) { }
    
    void addPostalOperator(PostalOperator postalOperator);
    
    // sending scenerio
    void passForDelivery();
    
    // receiving scenerio
    void passForReceiving();
    
private:
    Message& messsage;
    vector<PostalOperator&> postalOperators;
    
};
