//
//  Integer.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include "Integer.h"
#include <stdlib.h>
#include "Object.h"

Integer *newInteger(int value) {
    Integer *new = malloc(sizeof(Integer));
    OBJECTRETAIN(new);
    new->value = value;
    return new;
}

int getIntegerValue(Integer* ins) {
    return ins->value;
}
