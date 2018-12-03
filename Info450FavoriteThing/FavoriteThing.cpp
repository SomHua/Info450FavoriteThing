//
//  FavoriteThing.cpp
//  Info450FavoriteThing
//
//  Created by Som Hua on 11/30/18.
//  Copyright © 2018 Som Hua. All rights reserved.
//

#include "FavoriteThing.hpp"
#include <string>
#include <iostream>
using namespace std;

// initializing the variables
FavoriteThing::FavoriteThing()
{
    cdName = "";
    artistName = "";
    yearReleased = 0;
}

// the next four methods are the get methods for our variables.
string FavoriteThing::getTitle()

{
    return cdName;
}

string FavoriteThing::getArtist()

{
    return artistName;
}

int FavoriteThing::getYearReleased()

{
    return yearReleased;
}

// ask users to enter their favorite CD
int FavoriteThing::getUserInfo ()

{
    cout << "Please Enter the CD name:" << endl;
    getline(cin, cdName);
    cout << "Please enter the Artists name: " << endl;
    getline(cin, artistName);
    cout << "Please enter the released date" << endl;
    cin >> yearReleased;
  // if the input isn't number, then we will prompt for another input
    if (!cin.good())
    {
        cout << "Not a valid year, please re-enter the released year:" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        cin >> yearReleased;
        return badInput;
    }
    
    return 0;
}

// overloading the insertion to print object to the console 
ostream & operator<<(ostream &o, const FavoriteThing &i)

{
    o<< "Album Title : " << i.cdName<< endl;
    o << "Artist Name: " << i.artistName << endl;
    o << "Year Released :  " << i.yearReleased << endl;
    
    return o;
    
}


    

