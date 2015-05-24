//
//  main.c
//  MyPractice=)
//
//  Created by Велес Тяжеловоз on 17.05.15.
//  Copyright (c) 2015 MechanicalСrabLab. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    printf("\nВведите букву:");
    scanf("%c", &c);
    switch (c) {
        case 'a':printf("\nАнтилопа");break;
        case 'b':printf("\nБаран");break;
        case 'c':printf("\nВорон");break;
        case 'd':printf("\nГриф");break;
        default:printf("\nНе знаю я таких");
            break;
    }
    
    return 0;

}

