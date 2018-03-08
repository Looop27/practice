//
//  main.cpp
//  线性表
//
//  Created by iris LIU on 2018/3/7.
//  Copyright © 2018年 iris LIU. All rights reserved.
//

#include <iostream>
using namespace std;
#include "LinkList.hpp"
const int MAX=10;
struct sqList{
    int  ele[MAX];
    int length;
};
//获取元素
int getItem(sqList list,int i){
    int e;
    if(list.length==0||i<0||i>list.length)return 0;
    else
        e=list.ele[i];
    
   
    return e;
}
//插入元素
bool insertElement(sqList &list,int i,int e){
    if(i>=list.length||i<0)
        return false;
    else
    {
        for(int k = 5;k>i-1;k--)
            list.ele[k+1]=list.ele[k];
    }
    list.ele[i]=e;

    return true;
}
//删除元素
bool deleteElement(sqList &list ,int i ){
    if(i<0||i>list.length)
        return false;
    else if (i==list.length-1)
        list.ele[list.length-1]=0;
    else
        for(int k=i;k<list.length-1;k++){
            list.ele[k]=list.ele[k+1];
        }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    std::cout << "Hello, World!\n";
//    int  e[MAX]={1,2,3,4,5,6};
//    int len=sizeof(e)/4;
//    //这个位置的数组，如果不这样写没办法写成e[MAX],只能单个单个值赋值
//    sqList list={{1,2,3,4,5,6},.length=len};
//
//    insertElement(list,1,9);
//
//    for(int i=0;i<list.length;i++)
//    cout<<getItem(list,i)<<endl;
//
//    deleteElement(list,1 );
//
//    for(int i=0;i<list.length;i++)
//        cout<<getItem(list,i)<<endl;
    LinkList::LList L;
    
    LinkList linkList;
    linkList.createListHead(&L, 10);
      cout<<"createListHead"<<endl;
    for(int i=1;i<=10;i++){
      
     cout<<"元素"<<i<<" == "<<   linkList.getEle(&L, i)<<endl;
    }
    linkList.deleteList(&L, 10);
    cout<<"deleteList"<<endl;
   
    linkList.createListTail(&L, 10);
    cout<<"createListTail"<<endl;
    for(int i=1;i<=10;i++){
        cout<<"元素"<<i<<" == "<<   linkList.getEle(&L, i)<<endl;
    }
    cout<<"insert 999"<<endl;
    linkList.insertEle(&L, 2, 999);
    for(int i=1;i<=11;i++){
        cout<<"元素"<<i<<" == "<<   linkList.getEle(&L, i)<<endl;
    }
    linkList.deleteEle(&L, 2);
    cout<<"delete 2=999"<<endl;
    for(int i=1;i<=10;i++){
        cout<<"元素"<<i<<" == "<<   linkList.getEle(&L, i)<<endl;
    }


    return 0;
}
