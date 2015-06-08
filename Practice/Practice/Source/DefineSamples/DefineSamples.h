//
//  DefineSamples.h
//  Practice
//
//  Created by Велес Тяжеловоз on 07.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef Practice_DefineSamples_h
#define Practice_DefineSamples_h

#define MCLConcatenateMacro(arg1, arg2) \
    arg1 ## arg2

#define MCLStringify(arg) \
    #arg

#define MCLNoArgOneLineMacro printf("no arg macro called \n")

#define MCLNoArgMultiLineMacro \
    printf("no arg macro called 1st line \n"); \
    printf("no arg macro called 2nd line \n");

#define MCLArgumentedMacro(arg1, arg2, arg3) \
    printf("no arg macro called " MCLConcatenateMacro(arg1, arg2) "\n"); \
    printf("no arg macro called " MCLStringify(arg3) "\n");

#endif
