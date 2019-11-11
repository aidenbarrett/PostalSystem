#pragma once
//
//  PostalSystem
//  PostOffice.h
//
//  Created by Aiden Barrett on 10/11/2019.
//  

#include <iostream>
#include "Letter.h"
#include "PostalOperator.h"
#include <vector>

using namespace std;

class PostOffice : public LetterExchange {
public:
    PostOffice(Letter& letter) : letter(letter) { }
    
    void addPostalOperator(PostalOperator& postalOperator);
    
    // sending to postal operator to dispatcher scenerio
    void passForDispatcher();
    
    // sending to postal operator to deliver to customer scenerio
    void passForCustomer();
    
private:
    Letter& letter;
    vector<PostalOperator&> postalOperators;
    
};
