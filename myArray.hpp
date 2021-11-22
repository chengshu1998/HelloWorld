#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
    //构造函数
    MyArray(int Capacity){
        this->m_Capacity = Capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity];
    }
    //拷贝构造函数
    MyArray(const MyArray & arr){
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        //普通类型可以直接进行赋值 但是指针类型需要深拷贝
        this->pAddress = new T[this->m_Capacity];
        for(int i = 0; i < arr.size; i++){
            this->pAddress[i] = arr.pAddress[i];
        }
    }

    //重载 = 运算符 防止浅拷贝
    MyArray & operator=(const MyArray & myarray){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        this->m_Capacity = myarray.m_Capacity;
        this->m_Size = myarray.m_Size;
        this->pAddress = new T[this->m_Capacity];
        for(int i = 0; i < this->m_Size; i++){
            this->pAddress[i] = myarray[i];
        }
        return *this;  //方便进行p1=p2=p3
    }
    //重载[]操作符 arr[0]
    T & operator[](int index){
        return this->pAddress[index];
    }

    //尾插法
    void Push_back(const T & val){
        if(this->m_Capacity == this->m_Size){
            return;
        }
        this->pAddress[this-m_Size] = val;
        this->m_Size++;
    }

    //尾删法
    void Pop_back(){
        if(this->m_Size == 0){
            return;
        }
        this->m_Size--;
    }
    //获取容量
    int getCapacity(){
        return this->m_Capacity;
    }
    //获取大小
    int getSize(){
        return this->m_Size;
    }

    //析构函数
    ~MyArray(){
        if(this->pAddress != NULL){
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }

    }
private:
    T * pAddress;  //指向一个堆空间，用于存储真正的数组数据
    int m_Capacity;  //容量
    int m_Size;  //大小

};