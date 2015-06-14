//
//  MCLHuman.c
//  MCLHomeWork
//
//  Created by Велес Тяжеловоз on 08.06.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//
//1. Создать объектную структуру данных человек, имеющую поля имя, возраст, пол, количество детей, женат или нет, указатель на партнера, на родителей и на массив с детьми, где могло бы быть, максимум, 20 детей.
//Требования:
//- каждая из сущностей, будь то строка или массив, должны быть обернуты в свой объект, который, как минимум, умел бы выполнять подсчет ссылок и имел базовые аксессоры и тесты;
//- реализовать подсчет ссылок, геттеры и сеттеры для полей;
//- реализовать метод жениться, который бы устанавливал поле женат в true и указатель на партнера, с которым был брак;
//- реализовать метод развестись, который бы устанавливал поле женат и указатель на партнера;
//- реализовать метод произвести потомство, который бы создавал ребенка, устанавливал ему родителей, а у родителей добавлял бы ребенка;
//- создать тесты на все поведение человека.

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#include "MCLString.h"
#include "MCLHuman.h"
#include "MCLObject.h"
#include "MCLObjectMacros.h"


#pragma mark -
#pragma mark Private Declorations

enum  MCLHumanGender {
    humanUndrfined,
    humanMale,
    humanFemae,
};



struct MCLHuman {
    MCLObject *_genes;
    
    MCLHuman *_partner;
    MCLHuman *_father;
    MCLHuman *_mather;
    MCLHuman *_children[20];
    char *_name;
    enum MCLHumanGender *_gender;
    size_t _age;
    size_t _numberOfChildren;
    bool _isMaried;
    
};
#pragma mark
#pragma mark Private Implementation

MCLHuman *MCLCreateNewHumanWithParametrs(char *name, enum MCLHumanGender *gender, int age) {
    MCLHuman *newHuman = MCLObjectCreateOfType(MCLHuman);
    // create string name
    MCLString *humanName = MCLCreateStringWithString(name);
    // set string name
    
    // enum gender
    // set age
    release
    return MCLHuman;
}

#pragma mark -
#pragma mark - Public Implementation

void MCLAppearenceHuman(void) {
    MCLCreateNewHumanWithParametrs();
};

void MCLHumanGetMariad(void);

void MCLHumanGetChild(void);

void MCLHumanDivorce(void);



