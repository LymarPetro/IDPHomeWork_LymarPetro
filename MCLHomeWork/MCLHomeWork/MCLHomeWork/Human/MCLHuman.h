//
//  MCLHuman.h
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

#ifndef __MCLHomeWork__MCLHuman__
#define __MCLHomeWork__MCLHuman__

#include <stdio.h>
#include <stdbool.h>

#include "MCLObject.h"

typedef struct MCLHuman MCLHuman;

extern
void MCLAppearenceHuman(void);

extern
void MCLHumanGetMariad(void);

extern
void MCLHumanGetChild(void);

extern
void MCLHumanDivorce(void);








#endif /* defined(__MCLHomeWork__MCLHuman__) */
