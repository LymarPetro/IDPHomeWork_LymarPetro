//
//  MCLPrimitiveTypeOutput.h
//  Practice
//
//  Created by Велес Тяжеловоз on 07.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#ifndef Practice_MCLPrimitiveTypeOutput_h
#define Practice_MCLPrimitiveTypeOutput_h

#include <stdio.h>

/* 1. Создать макрос, который бы генерировал метод для вывода в консоль значения любого примитивного типа. 
 У макроса должно быть 2 параметра: тип, спецификатор вывода. При препроцессинге макрос должен создавать метод output_type, где вместо type должен быть подставлен тип, который мы выводим данным сгенерированным методом. Создать второй макрос, который бы занимался вызовом сгенерированного первым макросом метода, на вход должен получать тип метода.
 Требования:
 - создать тестовые методы для проверки того, как работает генерация на всех примитивных типах.

 */

void output_int(int value) {
    printf("int value = $d", value);
}

void output_short(short value) {
    printf("short value = $d", value);
}

#define MCLValueOutput(type, specifier) \
    void output_##type(short value) { \
    printf(#type " value = " #specifier, value); \
}



#endif
