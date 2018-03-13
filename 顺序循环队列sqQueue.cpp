//
//  main.cpp
//  sqQueue
//
//  Created by iris LIU on 2018/3/13.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#include <iostream>
using namespace std;
typedef int eleType;
static const int maxSize=100;
struct sqQueue{
    eleType data[maxSize];
    int front;
    int rear;
    
};
bool emptyQueue(sqQueue *q){
    if(q->front==q->rear)
        return true;
    else return false;
}
bool fullQueue(sqQueue *q){
    if((q->rear+1)%maxSize==q->front)
        return true;
    else return false;
}
int queueLength(sqQueue * q){
    return (q->rear-q->front+maxSize)%maxSize;
}
void initQueue(sqQueue * q){
    q->front=0;
    q->rear=0;
}
bool enQueue(sqQueue * q, eleType e){
    //判断队列满？
    //rear-》e
    //rear++%maxsize；
    if((q->rear+1+maxSize)%maxSize==q->front)
        return false ;//队列满
    q->data[q->rear]=e;
    q->rear=(q->rear+1)%maxSize;
    cout<<"insert success"<<e<<endl;
    
    return true;
}
bool deQueue(sqQueue * q ,eleType *e){
    //判断队列是否为空
    //front取数
    //front++
    if(q->rear==q->front) return false;
    *e=q->data[q->front];
    q->front=(q->front+1)%maxSize;
    cout<<"delete success"<<*e<<endl;
    return true;
    
}

void show(sqQueue * q){
    initQueue(q);
    cout<<"init length:"<<queueLength(q)<<endl;
    for(int i=1;i<=10;i++)enQueue(q, i);
    cout<<"after insert length:"<<queueLength(q)<<endl;
    int e;
    for(int j=1;j<=10;j++){
        e=j;
        deQueue(q,&e);
    }
     cout<<"after delete length:"<<queueLength(q)<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    sqQueue q;
    show(&q);
    std::cout << "Hello, World!\n";
    return 0;
}
