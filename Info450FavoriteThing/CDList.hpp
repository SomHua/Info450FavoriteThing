//
//  CDList.hpp
//  Info450FavoriteThing
//
//  Created by Som Hua on 11/30/18.
//  Copyright © 2018 Som Hua. All rights reserved.
//

#ifndef CDList_hpp
#define CDList_hpp
#include <string>
#include <stdio.h>
#include "FavoriteThing.hpp"

class CDList
{
private:
    FavoriteThing cdList[100];
    int cdSize;
public:
    CDList();
    void showList();
    int addCD();
    bool duplication(FavoriteThing cd);

};


#endif /* CDList_hpp */
