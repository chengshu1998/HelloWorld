//
// Created by 张先智 on 2021/11/21.
//


#include<iostream>
#include<string>
//#include<cstdio>
using namespace std;
int main(){
    clock_t s = clock();
    string a;
//    cin >> a;
    char b[3];
    fgets(b, 3, stdin);
//    cin >> b;
    clock_t e = clock();
//    printf("%c\n", a[0]);
    cout << b << endl;
//    cout << b[100] << endl;
    cout << (double)(e-s)/CLOCKS_PER_SEC*1000 << endl; //单位 毫秒
}
