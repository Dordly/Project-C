//
//  main.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include <stdio.h>
#include "Array.h"
int main(int argc, const char * argv[]) {
    Array *arr = newArray();
    
    People *p0 = newPeople(newString("张三"), newInteger(20));
    People *p1 = newPeople(newString("李四"), newInteger(16));
    People *p2 = newPeople(newString("王五"), newInteger(17));
    People *p3 = newPeople(newString("赵二"), newInteger(14));
    People *p4 = newPeople(newString("林三"), newInteger(22));
    People *p5 = newPeople(newString("小明"), newInteger(18));
    People *p6 = newPeople(newString("小红"), newInteger(25));
    People *p7 = newPeople(newString("小方"), newInteger(11));
    People *p8 = newPeople(newString("小花"), newInteger(19));
    People *p9 = newPeople(newString("小兔"), newInteger(22));
    People *p10 = newPeople(newString("新人"), newInteger(23));
    
    //增加元素
    addElement(arr, (Object *)p0);
    addElement(arr, (Object *)p1);
    addElement(arr, (Object *)p2);
    addElement(arr, (Object *)p3);
    addElement(arr, (Object *)p4);
    addElement(arr, (Object *)p5);
    addElement(arr, (Object *)p6);
    addElement(arr, (Object *)p7);
    addElement(arr, (Object *)p8);
    addElement(arr, (Object *)p9);
    
    
    //释放内存
    OBJECTRELEASE((Object*) p0);
    OBJECTRELEASE((Object*) p1);
    OBJECTRELEASE((Object*) p2);
    OBJECTRELEASE((Object*) p3);
    OBJECTRELEASE((Object*) p4);
    OBJECTRELEASE((Object*) p5);
    OBJECTRELEASE((Object*) p6);
    OBJECTRELEASE((Object*) p7);
    OBJECTRELEASE((Object*) p8);
    OBJECTRELEASE((Object*) p9);
    
    
    printf("增加10个元素\n");
    printArray(arr);
    
    printf("删除第3个元素\n");
    removeIndexAt(arr, 3);
    printArray(arr);
    
    printf("插入P10成为第4个元素\n");
    insertIndexAt(arr, (Object *)p10, 4);
    printArray(arr);
    
    OBJECTRELEASE((Object*) p10);
    printf("查找第5个元素\n");
    printf("位置:%d,姓名:%s,年龄:%d\n",4, getStringValue(getName((People*)getValueIndexAt(arr, 4))),getIntegerValue(getAge((People*)getValueIndexAt(arr, 4))));
    
    //销毁数组
    destroyArray(arr);
    
    return 0;
}
