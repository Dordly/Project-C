//
//  People.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include "People.h"
#include <stdlib.h>
#include "Object.h"

People* newPeople(String *name,Integer *age){
    People *newP = malloc(sizeof(People));
    OBJECTRETAIN(newP);
    newP->age = age;
    newP->name = name;
    return newP;
}
String* getName(People* people){
    return people->name;
}
Integer* getAge(People* people){
    return people->age;
}
