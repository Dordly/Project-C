//
//  Integer.h
//  Project-C
//
//  Created by dordly on 2019/1/3.
//  Copyright © 2019年 dordly. All rights reserved.
//

#ifndef Integer_h
#define Integer_h

#include <stdio.h>
typedef struct Integer{
    int retainCount;
    int value;
    
}Integer;

Integer* newInteger(int value);
int getIntegerValue(Integer* ins);
#endif /* Integer_h */
