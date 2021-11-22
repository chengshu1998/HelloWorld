//
// Created by 张先智 on 2021/11/21.
//

#ifndef HELLOWORLD_ARRAY_HPP
#define HELLOWORLD_ARRAY_HPP

#endif //HELLOWORLD_ARRAY_HPP

#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
public:
    MyArray(int rongliang){    //构造函数
        cout << "这是普通构造" <<endl;
        this->m_rongliang = rongliang;
        this->m_size = 0;
        this->add = new T[rongliang];
    }

    //拷贝构造
    MyArray(const MyArray& arr){
        cout << "这是拷贝构造" <<endl;
        this->m_rongliang = arr.m_rongliang;
        this->m_size = arr.m_size;
        this->add = new T[this->m_rongliang];
        for(int i = 0; i < this->m_size; i++)
        {
            this->add[i] = arr.add[i];
        }

    }
    //重载赋值操作 a=b=c
    MyArray& operator=(const MyArray& arr){
        if(this->add != NULL){
            delete[] this->add;
            this->add = NULL;
        }
        cout << "这是重载赋值构造" <<endl;
        this->m_rongliang = arr.m_rongliang;
        this->m_size = arr.m_size;
        this->add = new T[this->m_rongliang];
        for(int i = 0; i < this->m_size; i++)
        {
            this->add[i] = arr.add[i];
        }
        return *this;

    }

    //获得容量
    int getrongliang(){
        return this->m_rongliang;
    }
    //获得大小
    int getsize(){
        return this->m_size;
    }

    //尾插入
    void push_back(const T & val){
        if(this->m_size == this->m_rongliang){
            return;
        }
        this->add[this->m_size] = val;
        this->m_size++;
    }

    //尾删除
    void pop_back(){
        if(this->m_size > 0){
            this->m_size--;
        }
        else
            return;
    }

    //通过下标访问数组数据  并且可以作为左值 a[0] = 100
    T& operator[](const T & index){
        return this->add[index];
    }

    //析构函数
    ~MyArray(){
        cout << "这是析构函数" << endl;
        if(this->add != NULL){
            delete[] this->add;
            this->add = NULL;
            this->m_size = 0;
            this->m_rongliang = 0;
        }
    }

private:
    T * add;
    int m_rongliang;
    int m_size;

};
