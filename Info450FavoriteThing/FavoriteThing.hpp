//
//  FavoriteThing.hpp
//  Info450FavoriteThing
//
//  Created by Som Hua on 11/30/18.
//  Copyright © 2018 Som Hua. All rights reserved.
//


#pragma once
#include <iostream>
using namespace std;

const int badInput = 1000;

class FavoriteThing
{
private:
    
    string cdName;
    string artistName;
    int yearReleased;
    
public:
    
    FavoriteThing();
    int getYearReleased ();
    string getTitle();
    string getArtist();
    int getUserInfo();
    friend ostream & operator<<(ostream &o, const class FavoriteThing &i);
    
    
};



