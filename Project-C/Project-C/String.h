//
//  String.h
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#ifndef String_h
#define String_h

#include <stdio.h>
typedef struct String {
    int retainCount;
    char *value;
}String;

String* newString(char* value);
char* getStringValue(String* ins);
#endif /* String_h */
