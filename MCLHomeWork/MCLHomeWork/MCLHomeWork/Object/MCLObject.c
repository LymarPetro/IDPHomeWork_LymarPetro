//
//  MCLObject.c
//  MCLHomeWork
//
//  Created by Велес Тяжеловоз on 08.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include <stdlib.h>
#include <assert.h>

#include "MCLObject.h"
#include "MCLObjectMacros.h"

#pragma mark -
#pragma mark Private Decloration



#pragma mark -
#pragma mark Private implementation

void *__MCLObjectCreate(size_t objectSize, MCLObjectDeallocarorPtr _deallocator) {
    assert(0 != objectSize);
    
    MCLObject *newObject = calloc(1, objectSize);
    
    assert(NULL != newObject);
    
    newObject->_referenceCount = 1;
    newObject->_deallocator = _deallocator;
    
    return newObject;
}

void MCLObjectRetain (void *object) {
    if (object) {
        ((MCLObject*)object)->_referenceCount++;
    }
}

#pragma mark -
#pragma mark Public implementation

uint64_t MCLObjectGetReferenceCount(void *object){
    uint64_t count = 0;
    MCLObject *newObject = object;
    if (newObject) {
        count = newObject->_referenceCount;
    }
    return count;
}

void MCLObjectDaellocate (void *object) {
    free(object);
}


 