#pragma once
//
//  PostalSystem
//  PostalOperator.h
//
//  Created by Aiden Barrett on 10/11/2019.
//

#include <iostream>
#include "Letter.h"
#include "Dispatcher.h"
#include "PostOffice.h"
#include <vector>

using namespace std;

class PostalOperator : public LetterExchange {
public:
    PostalOperator( Dispatcher& dispatcher, PostOffice& postOffice) : dispatcher(dispatcher), postOffice(postOffice) { }
    
    // add letter to postal operator depending on sending/receiving from post office/dispatcher
    void addLetter(Letter& letter);
    
    void sendLetter();
    void receiveLetter();
 
private:
    vector<Letter&> letters;
    Dispatcher& dispatcher;
    PostOffice& postOffice;s
};
