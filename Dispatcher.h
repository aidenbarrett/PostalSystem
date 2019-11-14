#pragma once
//
//  PostalSystem
//  Dispatcher.h
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>
#include <vector>

class Dispatcher : public LetterExchange {
public:
    Dispatcher(LocalSortingOffice& localSortingOffice) : localSortingOffice(localSortingOffice) { }
    
    void sendLetters();
    void receiveLetters();
    
    void addPostalOperator(PostalOperator& postalOperator);
    
private:
    vector<PostalOperator&> postalOperators;
    LocalSortingOffice& localSortingOffice;
    
};
