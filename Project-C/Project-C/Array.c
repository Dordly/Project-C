//
//  Array.c
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#include "Array.h"
#include <String.h>
#include <stdlib.h>
#include <assert.h>


//分配空间
static AnyObject* allocMemoryByCapacity(Array *arr){
    return malloc(sizeof(People*) * arr->capacity);
}

//创建数组
Array* newArray(){
    Array *arr = malloc(sizeof(Array));
    arr->length = 0;
    arr->capacity = 32;
    arr->value = allocMemoryByCapacity(arr);
    return arr;
}

//获取数组长度
int getArrayLength(Array *array){
    return array->length;
}

//增加元素
void addElement(Array *array,AnyObject value){
    if (array->length >= array->capacity) {
        array->capacity *= 2;
        AnyObject *oldValue = array->value;
        memcpy(array->value, oldValue, array->length*sizeof(AnyObject));
        free(oldValue);
    }
    OBJECTRETAIN(value);
    array->value[array->length] = value;
    array->length++;
}

//删除元素
Array* removeIndexAt(Array *arry,int index){
    assert(index >= 0 && index < arry->length);  //断言 防止越界
    
    OBJECTRELEASE(getValueIndexAt(arry, index));
    
    arry->length -- ;
    for (int i = index; i < arry->length; i++) {
        arry->value[i] = arry->value[i+1];
    }
    return arry;
}

//在指定位置增加元素
Array* insertIndexAt(Array *array,AnyObject value,int index){
    if (array->length >= array->capacity) {
        array->capacity *= 2;
        AnyObject *oldValue = array->value;
        memcpy(array->value, oldValue, array->length*sizeof(AnyObject));
        free(oldValue);
    }
    array->length++;
    
    
    //将元素后移
    for (int i = 1; i <= array->length - index; i++) {
        array->value[array->length - i] = array->value[array->length- i - 1];
    }
    
    //插入指定位置
    array->value[index] = value;
    OBJECTRETAIN(value);
    return array;
}



//获取某个元素
AnyObject getValueIndexAt(Array *array,int index){
    assert(index >= 0 && index < array->length);
    return array->value[index];
}

//销毁
void destroyArray(Array *array){
    free(array->value);
    free(array);
    printf("数组被销毁\n");
}
//打印结果
void printArray(Array *arr){
    for (int i = 0; i < arr->length; i++) {
        printf("位置:%d,姓名:%s,年龄:%d\n",i, getStringValue(getName((People*)getValueIndexAt(arr, i))),getIntegerValue(getAge((People*)getValueIndexAt(arr, i))));
    }
}
