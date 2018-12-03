//
//  main.cpp
//  Info450FavoriteThing
//
//  Created by Som Hua on 11/30/18.
//  Copyright © 2018 Som Hua. All rights reserved.
//

#include <iostream>
#include "CDList.hpp"
#include "FavoriteThing.hpp"
#include <string>
using namespace std;
void instructions();


int main()
{
    CDList cd;
    char answer ;
    instructions();

    do
    {
        // call the  addCD method from the CDList class 
        cd.addCD();
        cout << endl; 
        cout << "Would you like another entry?" << endl; 
        cin >>answer;
        cout << endl;
        cin.clear();
        cin.ignore();
    }
    while (answer == 'Y' || answer == 'y');
    
    cd.showList();
    return 0;
}

// display instruction to the user
void instructions()
{
    cout << "**" << " --------------------- " << "**" << endl;
    cout << "**" << "    Welcome to Your    " << "**" << endl;
    cout << "**" << "    your Favorite      " << "**" << endl;
    cout << "**" << "     CD Tracker        " << "**" << endl;
    cout << "**" << "-----------------------" << "**"<< endl;
    cout << endl;
}


