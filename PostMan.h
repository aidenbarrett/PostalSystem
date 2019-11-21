#pragma once
//
//  PostMan.cpp
//  PostalSystem
//
//  Created by Aiden Barrett on 21/11/2019.
//  Copyright © 2019 Aiden Barrett. All rights reserved.
//

#include <iostream>
#include <vector>

class Postman {
public:
    PostMan( PostOffice& postOffice )
        : postOffice(postOffice), limit(50), letterCount(0) { }
    
    bool isFull();
    void addLetter(Letter& letter);
    void deliverLetters();
    
private:
    vector <Letter&> letters;
    PostOffice& postOffice;
    int limit;
    int letterCount;
};
