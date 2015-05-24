//
//  MCLTestMamaPapa.c
//  IDPHomeWork Lesson 1
//
//  Created by Велес Тяжеловоз on 15.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include "MCLTestMamaPapa.h"



void MCLTestMamaPapaOutput(void) {
    for (int a = 0; a < 1000; a++) {
        printf("Number of iteration %d\n", a);
        int b = MCLMamaPapaOutput(a);
        printf("%d\n", b);
    }
    
   }
