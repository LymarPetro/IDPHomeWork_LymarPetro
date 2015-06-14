//
//  MCLObject.h
//  MCLHomeWork
//
//  Created by Велес Тяжеловоз on 08.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef __MCLHomeWork__MCLObject__
#define __MCLHomeWork__MCLObject__

#include <stdio.h>

typedef void (*MCLObjectDeallocarorPtr) (void *);

typedef struct {
    uint64_t _referenceCount;
    MCLObjectDeallocarorPtr _deallocator;
} MCLObject;

extern
void *__MCLObjectCreate(size_t objectSize, MCLObjectDeallocarorPtr _deallocator);

extern
void MCLObjectRetain(void *object);

extern
uint64_t MCLObjectGetReferenceCount(void *object);

extern
void MCLObjectRelease(void);

extern
void MCLObjectDeallocate(void *object);

#endif /* defined(__MCLHomeWork__MCLObject__) */
