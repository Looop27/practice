//
//  main.cpp
//  sqstack
//
//  Created by iris LIU on 2018/3/13.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#include <iostream>
#include "sqDoubleStack.hpp"
using namespace std;
typedef int eleType;
static const int MAXSIZE =100;
struct stack{
    eleType data[MAXSIZE];
    int top;//栈顶指针，其实就是数组下标
};
void initStack(stack *s){
    s->top=-1;
    
}
bool push(stack *s,eleType e){
    //判断栈满？
    //top++
    //赋值
    if(s->top==MAXSIZE-1)
        return false;//full
    s->top++;
    s->data[s->top]=e;
    return true;
}
bool pop(stack * s, eleType *e){
    //判断栈空？
    //top值赋给e
    //top--
    if(s->top==-1)
        return false;
    *e=s->data[s->top];
    s->top--;
    return true;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
//    stack s;
//    int e;
//    initStack(&s);
//    push(&s,11);
//    cout<<"stack's top="<<s.top<<"="<<s.data[s.top]<<endl;
//    pop(&s,&e);
//    cout<<"after pop top="<<s.top<<"="<<e<<endl;
    doubleStack s;
    s.showMessage(&s);
    std::cout << "Hello, World!\n";

    return 0;
}

