//
// Created by 张先智 on 2021/11/21.
//
#include"Array.hpp"
#include<string>
#include<iostream>
using namespace std;
void test1(){
    MyArray<int> arr1(10);
    for(int i = 0; i < 5; i++){
        arr1.push_back(i);
    }
    arr1.pop_back();
    cout << arr1.getrongliang() <<endl;
    cout << arr1.getsize() <<endl;
    MyArray<int> arr2(arr1);
    MyArray<int> arr3(100);
    arr3 = arr2;
    cout << arr3.getrongliang() <<endl;

}
int main(){
    test1();

}

