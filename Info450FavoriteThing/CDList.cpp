//
//  CDList.cpp
//  Info450FavoriteThing
//
//  Created by Som Hua on 11/30/18.
//  Copyright © 2018 Som Hua. All rights reserved.
//

#include "CDList.hpp"
#include <iostream>
#include <string>

using namespace std ;

CDList::CDList()
{
    cdSize = 0;
}

// check whether the new entry is a duplication of any of the past entry
bool CDList::duplication(FavoriteThing cd)
{
    int i;
    for (i = 0; i <cdSize; i++)
    {
        
        if(cd.getTitle()==cdList[i].getTitle() && cd.getArtist()==cdList[i].getArtist())
        
        {
            return true;
        }
    }
    return false;
   
}

// if the new entry isn't a duplication, then add to the list
int CDList::addCD()
{
    FavoriteThing compareCD;
    compareCD.getUserInfo();
    if (duplication(compareCD)) // if the new entry is a duplication of one of the past entries
    {
        cout << "You already entered this CD!" << endl;
        return 0;
    }
    // if the entry isn't a duplication, then add it to the list 
    else
    {
        cdList[cdSize] = compareCD;
        cdSize ++;
        return 0;
    }
}


// Print the list to the console
void CDList::showList()

{
    int i;
    for (i=0; i<cdSize; i++)
        cout << cdList[i] << endl;
}



