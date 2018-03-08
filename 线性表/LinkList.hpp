//
//  LinkList.hpp
//  线性表
//
//  Created by iris LIU on 2018/3/8.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class LinkList{
  
public:
    struct Node{
        
        int data;
        Node * next;
    };
    
    typedef Node *LList;
    LinkList()  {}
    ~LinkList(){}
    
    void createListHead(LList *,int);
    void createListTail(LList *,int);
    void deleteList(LList *,int);
    int getEle(LList *,int);
    bool insertEle(LList *, int ,int );
    bool deleteEle(LList *,int );
};


#endif /* LinkList_hpp */
