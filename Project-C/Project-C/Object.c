//
//  Object.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include "Object.h"
#include <stdlib.h>
void objectRetain(Object *obj){
    obj -> retainCount += 1;
}
void objectRelease(Object *obj){
    obj -> retainCount -= 1;
    if (obj -> retainCount <= 0) {
        free(obj);
    }
}
int getRetainCount(Object *obj){
    return obj -> retainCount;
}
