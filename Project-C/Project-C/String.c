//
//  String.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include "String.h"
#include <stdlib.h>
#include "Object.h"

String* newString(char* value) {
    String *str = malloc(sizeof(String));
    objectRetain((Object *)str);
    str -> value = value;
    return str;
}

char* getStringValue(String* ins) {
    return ins -> value;
}
