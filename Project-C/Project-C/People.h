//
//  People.h
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#ifndef People_h
#define People_h

#include <stdio.h>
#include "Integer.h"
#include "String.h"

typedef struct People{
    int retainCount;
    String* name;
    Integer* age;
    
}People;

People* newPeople(String *name,Integer *age);
String* getName(People* people);
Integer* getAge(People* people);

#endif /* People_h */
