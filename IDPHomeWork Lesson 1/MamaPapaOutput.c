//
//  MamaPapaOutput.c
//  IDPHomeWork Lesson 1
//
//  Created by Велес Тяжеловоз on 14.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include "MamaPapaOutput.h"



extern
int MCLMamaPapaOutput(int value) {
    if (value % 15 == 0) {
        printf("mamapapa\n");
        return 15;
    }
    
    if (value % 3 == 0) {
        printf("mama\n");
        return 3;
    }
    
    if (value % 5 == 0) {
        printf("papa\n");
        return 5;
    }
    
    return 0;
}


