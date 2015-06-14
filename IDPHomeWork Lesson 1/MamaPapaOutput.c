//
//  MamaPapaOutput.c
//  IDPHomeWork Lesson 1
//
//  Created by Велес Тяжеловоз on 14.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include "MamaPapaOutput.h"
#include "MCLTestMamaPapa.h"

int MCLMamaPapaOutput(int number) {
    if (number % 15 == 0) {
        printf("mamapapa\n");
        return 15;
    }
    
    if (number % 3 == 0) {
        printf("mama\n");
        return 3;
    }
    
    if (number % 5 == 0) {
        printf("papa\n");
        return 5;
    }
    
  return 0;
}


