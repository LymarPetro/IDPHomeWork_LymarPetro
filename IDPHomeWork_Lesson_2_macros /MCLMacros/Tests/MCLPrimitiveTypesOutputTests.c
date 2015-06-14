//
//  MCLPrimitiveTypesOutputTests.c
//  MCLMacros
//
//  Created by Велес Тяжеловоз on 24.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include "MCLPrimitiveTypesOutputTests.h"
#include "MCLMacrosVarTypeOutput.h"

#pragma mark -
#pragma mark Private

    MCLFunctionTypeOutput(int, %d);
    MCLFunctionTypeOutput(short, %d);
    MCLFunctionTypeOutput(char, %c);
    MCLFunctionTypeOutput(long, %ld);
    MCLFunctionTypeOutput(float, %f);
    MCLFunctionTypeOutput(double, %lf);

static
void MCLGenerateFirstMacros(void);

#pragma mark -
#pragma mark Public Implimintation

void MCLPrimitiveTypesOutputTest(void){
     MCLGenerateFirstMacros();
    }

#pragma mark -
#pragma mark Privat implimintation

void MCLGenerateFirstMacros(void){
    MCLCallFirstMacros(int, 5);
    MCLCallFirstMacros(short, 123);
    MCLCallFirstMacros(char, 'D');
    MCLCallFirstMacros(long, 34534);
    MCLCallFirstMacros(float, 2.345);
    MCLCallFirstMacros(double, 14.23);
    }

