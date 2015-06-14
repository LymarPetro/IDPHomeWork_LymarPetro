//
//  MCLMacrosVarTypeOutput.h
//  MCLMacros
//
//  Created by Велес Тяжеловоз on 17.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef __MCLMacros__MCLMacrosVarTypeOutput__
#define __MCLMacros__MCLMacrosVarTypeOutput__

#include <stdio.h>

#define MCLFunctionTypeOutput(type, specifier) \
    static void output_##type(type value) { \
    printf(#type "Type value - " #specifier "\n", value);\
    }

#define MCLCallFirstMacros(type, value)\
     output_##type(value);



#endif /* defined(__MCLMacros__MCLMacrosVarTypeOutput__) */
