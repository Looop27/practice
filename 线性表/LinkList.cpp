//
//  LinkList.cpp
//  线性表
//
//  Created by iris LIU on 2018/3/8.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#include "LinkList.hpp"
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
void LinkList::createListHead(LList *L,int n){
    //把新节点插入list头
    //思路：传入一个next=null的list，
    //创建一个新节点，随机赋值data，p->next=L->next,l->next=p
    //循环n次
   LList p;
    int data;
    *L=new Node;
    for(int i=1;i<=n;i++){
        p=new Node;
        srand((unsigned)time(0)) ;
        data= rand()%100+1;
        p->data=i;
        p->next=((*L)->next);
        (*L)->next=p;
    }
    
}

void LinkList::createListTail(LList * L, int n){
    //把新节点插入list尾
    //思路：穿一个next=null的list，L->next=r，给r附一个值
    //创建新节点p,r,随机给p赋值,r->next=p,r=p
    //循环
    //r->next=null
    LList p,r;
    *L=new Node;
     r=new Node;
     p=new Node;
    (*L)->next=r;
    r->data=1;
    for(int i=1;i<=n;i++){
        p=new Node;
        srand((unsigned)time(0));
        p->data=i+1;
        r->next=p;
        r=p;
    }
    r->next=nullptr;
    
}

void LinkList::deleteList(LList *L, int n){
    //定义两个linklist p,q
    //p=*L,
    //q=p->next ,delete p,p=q
    //循环
    
    LList q;
     LList p=*L;
    p=p->next;
//    for(int i=1;i<=10;i++){
//        cout<<"元素"<<i<<" == "<< getEle(&p, i)<<endl;
//    }
    int e;
     e=p->data;
    
    for(int i=1;i<n;i++){
        q=new Node;
        q=p->next;
        delete p;
        p=q;
    }
    delete p;
    (*L)->next=NULL;
  
}

int LinkList::getEle(LList *L, int n){
    int e;
    LList p=*L;

    for(int i=1;i<=n;i++){
        
        p=p->next;
        e=p->data;
    }
    return e;
    
}

bool LinkList::insertEle(LList *L, int n, int e){

    if(n<1)return false;
    else{
        LList p=(*L);
        for(int i=1;i<n;i++){
            p=p->next;
        }
        LList q=new Node;
        q->data=e;
        q->next=p->next;
        p->next=q;
     
        
        return true;
        
    }
}

bool LinkList::deleteEle(LList *L, int n){
    if(n<1)return false;
    else{
        LList p=(*L);
        for(int i=1;i<n;i++){
            p=p->next;
        }
        LList q;
        q=p->next;
        p->next=p->next->next;
        delete q;
        
        return true;
        
    }
}


   
