//
//  sqDoubleStack.hpp
//  sqstack
//
//  Created by iris LIU on 2018/3/13.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#ifndef sqDoubleStack_hpp
#define sqDoubleStack_hpp

#include <stdio.h>
#include<iostream>
using namespace std;
class doubleStack{
   static const int MAXSIZE =100;
          int data[MAXSIZE];
        int top1;
        int top2;
public:

    doubleStack();
    ~doubleStack();
   bool push(doubleStack *,int ,int );
   bool pop(doubleStack *,int ,int *);
    void showMessage(doubleStack *);
    
};

#endif /* sqDoubleStack_hpp */
