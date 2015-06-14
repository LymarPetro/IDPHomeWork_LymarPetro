//
//  MCLString.h
//  MCLHomeWork
//
//  Created by Велес Тяжеловоз on 13.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef __MCLHomeWork__MCLString__
#define __MCLHomeWork__MCLString__

#include <stdio.h>

#include "MCLObject.h"

typedef struct MCLString{
    MCLObject _genes;
    
    size_t _size;
    char *cString;
} MCLString;

extern
void MCLCreateStringWithStrind(char *text)


#endif /* defined(__MCLHomeWork__MCLString__) */
