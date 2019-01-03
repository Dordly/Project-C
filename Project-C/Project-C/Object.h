//
//  Object.h
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include <stdio.h>

typedef struct Object {
    int retainCount;
}Object;
//宏定义方法
#define OBJECTRETAIN(obj) objectRetain((Object*)obj)
#define OBJECTRELEASE(obj) objectRelease((Object*)obj)
#define GETRETAINCOUNT(obj) getRetainCount((Object*)obj)
void objectRetain(Object *obj);
void objectRelease(Object *obj);
int getRetainCount(Object *obj);
#endif /* Object_h */
