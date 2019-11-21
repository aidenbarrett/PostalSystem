#pragma once
//
//  PostalSystem
//  PostalOperator.h
//
//  Created by Aiden Barrett on 10/11/2019.
//

/* - Routine for PostalOperator
 
1) PostalOperator will add letters - addLetter( Letter& letter)
2) Will stop adding letters when the limit reaches zero - isEmpty()
3A) Once limit is reached, PostalOperator will send letters to Dispatcher - sendLetter()
3B) Once limit is reached, PostaOperator will send letters from Dispatcher to PostOffice - receiveLetter()
3C) LocalSortingOffice...
 
isSending will determine the direction of the postalOperator, everytime we call sendLetters() its going to make it false, and then everytime we call receiveLetters(), its going to make it true.
 
 sendLetters() will only run its logic under two conditions, 1) if limit is full, 2) if isSending is false
 recieveLetters() will only run its logic under two conditions, 1) if limit is full, 2) if isSending is true
 
 the checking for send/receiveLetters will be external
 
*/

#include <iostream>
#include "Letter.h"
#include "Dispatcher.h"
#include "PostOffice.h"
#include <vector>

using namespace std;

class PostalOperator : public LetterExchange {
public:
    PostalOperator( Dispatcher& dispatcher, PostOffice& postOffice ) : dispatcher(dispatcher), postOffice(postOffice), limit(10) { } // limit initialised to 10, doesn't allow over riding, gives us more security, doesnt allow user to change limit.
    
    PostalOperator( Dispatcher& dispatcher, LocalSortingOffice& localSortingOffice ) : dispatcher(dispatcher), localSortingOffice(localSortingOffice), limit(10) { }
    
    // add letter to postal operator depending on sending/receiving from post office/dispatcher
    void addLetter(Letter& letter);
    
    void sendLetters(); // send letter will only be executed after the limit reaches zero.
    void receiveLetters(); // same for receive letter
    bool isEmpty();
    
private:
    vector<Letter&> letters;
    Dispatcher& dispatcher;
    PostOffice& postOffice;
    LocalSortingOffice& localSortingOffice;
    int limit;
    bool isSending;
};
