//
//  sqDoubleStack.cpp
//  sqstack
//
//  Created by iris LIU on 2018/3/13.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#include "sqDoubleStack.hpp"
#include <iostream>
using namespace std;
doubleStack::doubleStack(){
    top1=-1;
    top2=MAXSIZE;
}

doubleStack::~doubleStack()
{

      //  delete[] data;
   
}

bool doubleStack::push(doubleStack *s,int type,int e){
    //判断栈满？
    //判断加到哪个栈中
    //赋值
    if(s->top1+1==s->top2)
        return false;//full
    if(type==1){
        s->top1++;
        s->data[s->top1]=e;
        return true;
    }
    else if(type==2){
        s->top2--;
        s->data[s->top2]=e;
        return true;
    }
    else
        return false;
    
}
bool doubleStack::pop(doubleStack *s,int type,int *e){
    //判断类型？
    //判断栈空？
    //取值
    if(type==1)
    {
        if (s->top1==-1)return false;//empty
        else {
           *e=s->data[s->top1--];
            return true;
        }
    }
        
    else if(type==2)
        if (s->top2==MAXSIZE)return false;//empty
        else
        {
            *e=s->data[s->top2++];
            return true;
            
        }
        else return false;
}

void doubleStack::showMessage(doubleStack * s){
    push(s,1,11);
    cout<<"stack's top1="<<s->top1<<"="<<s->data[s->top1]<<endl;
   push(s,2,22);
    cout<<"stack's top2="<<s->top2<<"="<<s->data[s->top2]<<endl;
    int e;
    pop(s,1,&e);
    cout<<"after pop top1="<<s->top1<<"="<<e<<endl;

    pop(s,2,&e);
    cout<<"after pop top2="<<s->top2<<"="<<e<<endl;

}

