////#include <iostream>
////#include<stdio.h>
////#include<string>
////#include<deque>
////#include<vector>
////#include<algorithm>
////using namespace std;
////int main() {
////
////    vector<int> vec;
////    for(int i = 5; i < 10; i--){
////        vec.push_back(i);
////    }
////    vector<int>::iterator v = vec.begin();  //使用迭代器依次访问vector中的值
////    while(v != vec.end()){
////        cout << "value of v = " << *v << endl;
////        v++;
////    }
//////    deque<int> B;
//////    B.push_back(1);
//////    B.push_front(0);
//////    B.pop_front();
//////    printf("%d", B[0]);
////
//////    int eor = 10;
//////    int right = eor & (~eor+1); //提取最右侧的1
//////    printf("%d\n", right);
////
////    return 0;
////}
////
////#include<iostream>
////#include<list>
////using namespace std;
////void print_list(const list<int>& a){
////    list<int>::const_iterator iter;
////    for(iter = a.begin(); iter != a.end(); iter++){
////        cout << *iter << endl;
////    }
////}
////int main(){
////    list<int> a;
////    list<int> b;
////    b.push_back(100);
////    b.push_back(200);
////    b.push_back(300);
////    b.push_back(400);
////
////    a.push_front(10);
////    a.push_front(2001);
////    a.push_front(-1);
////    a.push_front(9999);
////    a.push_back(8989);
////    a.push_back(1010);
////    a.insert(a.begin(), 10);
////    a.insert(a.end(), 2, 100);
////    a.insert(a.begin(), ++b.begin(), --b.end());
////
////
////    a.erase(--a.end());  //删除
////    a.reverse();  //翻转
////    a.sort(); //排序
////    print_list(a);
////
////
////}
//
////栈不是一个独立的容器 需要用到deque list vector等作堆栈
////先进后出 只可以在栈顶进行操作
////#include<iostream>
////#include<stack>
////#include<list>
////#include<vector>
////#include<deque>
////using namespace std;
////
////int main(){
////    stack<int, deque<int>> a;
////    stack<int, list<int>> b;
////    stack<int, vector<int>> c;
////    stack<int> d;//d在这里默认使用deque作堆栈
////    // 堆栈的一些操作
////    //s.empty() 查看堆栈是否为空
////    //s.size() 堆栈的大小/长度
////    //s.pop() 删除顶部数据 且不返回
////    //s.top() 查看栈顶数据但是不删除
////    //s.push(item) 压栈
////    d.push(10);
////    d.push(9);
////    cout << d.top() << " " << d.size() <<  endl;
////    d.pop();
////    cout << d.top() << " " << d.size() <<  endl;
////    d.pop();
//////    cout << d.top() << " " << d.size() <<  endl;
////    cout << d.empty() << endl;
////    return 0;
////}
//
//
//#include<iostream>
//#include<vector>
//
//using namespace std;
//int main(){
//    vector<int> nums = {2, 1, 3, 1, 2};
////    nums.push_back(2);
////    nums.push_back(3);
//    int target = 5;
//    int i,j;
//    for(i=0;i<nums.size()-1;i++)
//    {
//        for(j=i+1;j<nums.size();j++)
//        {
//            if(nums[i]+nums[j]==target)
//            {
//                cout << i << " " << j << endl;
//            }
//        }
//    }
//}


//#include<iostream>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//bool IsSubstring(string s,string t){
//    string::iterator it;
////    char *it;
//    int i;
//    int x = s.length();
//    it = t.begin();
//    for(i=0;i<x;i++){
//        it=(find(it,t.end(),s[i]));
//        if(it == t.end())   //t.end()表示为空 也就是不存在
//            return false;
//
//    }
//
//}
//
//int main(){
//    string s,t;
//    while(cin>>s>>t)
//    {
//        if(IsSubstring(s,t))
//            cout<<"yes"<<endl;
//        else
//            cout<<"no"<<endl;
//
//    }
//}

//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//
//vector<int> twoSum(vector<int>& num, int target){
//    map<int, int> a;
//    vector<int> b(2, -1);
//    int i;
//    for(i = 0; i < num.size(); i++){
//        if(a.count(target - num[i]) > 0){
//            b[0] = a[num[i]];
//            b[1] = i;
//            break;
//        }
//        a[num[i]] = i;
//    }
//    return b;
//}
//int main(){
//    int target = 9;
//    vector<int> num = {2, 7, 11, 2};
//    twoSum(num, target);
////    cout << twoSum(num, target) << endl;
//
//
//    return 0;
//
//}

//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//int main(){
//    map<char, int> a;
//    a['I'] = 1;
//    a['V'] = 5;
//    a['X'] = 10;
//    a['L'] = 50;
//    a['C'] = 100;
//    a['D'] = 500;
//    a['M'] = 1000;
//    int cont = 0;
////    cout << a["L"] << endl;
//    string s;
//    cin >> s;
////    cout << s.length();
//    for(int i = 0; i < s.length() - 1 ; ){
////        cout << s[i] << " ";
//        if(a[s[i]] >= a[s[i+1]]){
//            cont += a[s[i]];
//            i++;
//        }
//        if(a[s[i]] < a[s[i+1]]) {
//            cont -= a[s[i]];
//            i++;
////            cont += a[s[++i]];
//        }
//
//    }
//    cont += a[s[s.length() -1]];
//    return cont;
//
//}

//
////微软真题 纸的折痕
//#include<iostream>
//
//using namespace std;
//void printAllFolds(int i, int N, bool down){
//    if(i > N) return;
//    printAllFolds(i + 1, N, true);
//    if(down == true) cout << "1 ";
//    else cout << "0 ";
//    printAllFolds(i + 1, N, false);
//}
//int main(){
//    //1
//    //110
//    //1101100
//    int N = 3;
//    printAllFolds(1, N, true);
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//double zhongweishu(vector<int>& nums){
//    if(nums.size() % 2 == 0){
////        cout << nums[nums.size()/2-1];
//        return (nums[nums.size()/2-1]+nums[nums.size()/2])/2.0;
////        return 4.2;
//    }
//    else return nums[nums.size()/2];
//
//};
//double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//    int i = 0;
//    int j = 0;
//    vector<int> nums3;
//
//
//    if(nums1.size() == 0) return zhongweishu(nums2);
//    if(nums2.size() == 0) return zhongweishu(nums1);
//
//    while(i != nums1.size() && j != nums2.size()){
//        if(nums1[i] <= nums2[j]){
//            nums3.push_back(nums1[i++]);
//        }
//        else{nums3.push_back(nums2[j++]);}
//    }
//    if(i == nums1.size()){
//        for( ; j < nums2.size(); j++){
//            nums3.push_back(nums2[j]);
//        }
//    }
//    if(j == nums2.size()){
//        for( ; i < nums1.size(); i++){
//            nums3.push_back(nums1[i]);
//        }
//    }
//
//
//    return zhongweishu(nums3);
//
//}
//int main(){
//    vector<int> nums1 = {1, 2, 3, 7,};
//    vector<int> nums2 = {1, 2, 3, 4};
//
//    double res = findMedianSortedArrays(nums1, nums2);
//    cout << res << endl;
////    cout << 5/2.0;
////    cout << nums2.size();
//
//}




//vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    int i = 0;
//    int j = 0;
//    vector<int> nums3;
//    for (int h = nums1.size() - 1; h >= m; h--) {
//        nums1.pop_back();
//    }
//    for (int h = nums2.size() - 1; h >= n; h--) {
//        nums2.pop_back();
//    }
//    while (i == nums1.size() || j == nums2.size()) {
//        if (nums1[i] <= nums2[j]) {
//            nums3.push_back(nums1[i]);
//            i++;
//        } else {
//            nums3.push_back(nums2[j]);
//            j++;
//        }
//    }
//    if (i == nums1.size()) {
//        for (j; j < nums2.size(); j++) {
//            nums3.push_back(nums2[j]);
//        }
//    }
//    if (j == nums2.size()) {
//        for (i; i < nums1.size(); i++) {
//            nums3.push_back(nums1[i]);
//        }
//    }
//
//    return nums3;
//}
//int main(){
//    vector<int> nums1 = {1, 2, 2, 0, 0};
//    vector<int> nums2 = {3, 5, 6};
//    vector<int> num = merge(nums1, 3, nums2, 3);
//    for(int i = 0; i < num.size(); i++){
//        cout << num[i] << " ";
//    }
//  }




//int main(){
//    int i = 0;
//    int j = 0;
//    vector<int> nums1 = {1,2,3};
//    vector<int> nums2 = {4,4,5};
//    vector<int> nums3;
//    cout << nums1.size() << endl;
//    nums3.push_back(nums1[i]);
//    cout << nums1.size()<< endl;
//    while(i != nums1.size() || j = nums2.size()){
//
//        if(nums1[i] <= nums2[j]){
//            nums3.push_back(nums1[i++]);
//        }
//        else{nums3.push_back(nums2[j++]);}
//    }
//    if(i == nums1.size()){
//        for( ; j < nums2.size(); j++){
//            nums3.push_back(nums2[j]);
//        }
//    }
//    if(j == nums2.size()){
//        for( ; i < nums1.size(); i++){
//            nums3.push_back(nums1[i]);
//        }
//    }
//    cout << nums3.size();
//}




//在堆区开辟内存
#include<iostream>
using namespace std;

//int * fun(){
//    int * p = new int(10);  //开辟在堆区
//    return p;
//}
//
//int main(){
//    int * p = fun();
//    cout<< p << endl;
//    cout<< p << endl;
//    cout<< *p << endl;
//    cout<< *p << endl;
////    system("pause");
//}


//#include<iostream>
//using namespace std;

//int main(){
//    int * arr = new int[10];
//    for(int i = 0; i < 10; i++){
//        arr[i] = i + 100;
//    }
//    for(int i = 0; i < 10; i++){
//        cout<< arr[i]<< endl;
//    }
//    delete[] arr;
////    cout<< arr[0];  //堆区已经释放 不能再次正确输出
//}



////用类做友元
//#include<iostream>
//#include<string>
//using namespace std;
//class Building
//{
//    friend class Goodgay;
//public:
//    Building();
//    static int a;
//
//
//public:
//    string settingroom;
//private:
//    string bedroom;
//
//};
//class Goodgay
//{
//public:
//    Goodgay();
//    void vistfriend();
//
//private:
//    Building *building;
//};
//
//Building::Building() {
//    this->settingroom = "客厅";
//    this->bedroom = "卧室";
//}
//
//Goodgay::Goodgay() {
//    building = new Building;
//}
//void Goodgay::vistfriend() {
//    cout<< "这是我朋友的： "<< building->settingroom<<endl;
//    cout<< "这是我朋友的： "<< building->bedroom<<endl;
//}
//
//int main(){
//    Goodgay gg;
//    gg.vistfriend();
////    Building b1;
////    b1.a = 1;
////    Building b2;
////    cout << b2.a << endl;
//}

////利用函数模板构造通用的排序算法
//#include<iostream>
//#include<string>
//using namespace std;
//template<class T>
//void swap_(T &a, T &b){
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//template<class T>
//void printout(T &arr, int len){
//    for(int i = 0; i < len; i++){
//        cout << arr[i] << " ";
//    }
//}
//
//template<class T>
//void sort(T arr[], int len) {
//    for (int i = 0; i < len; i++) {
//        int max = i;
//        for (int j = i + 1; j < len; j++) {
//            if (arr[max] < arr[j]) {
//                max = j;
//            }
//        }
//        if (max != i) {
//            swap_(arr[max], arr[i]);
//        }
//    }
//}
//int main(){
////    int arr[] = {1,2,3,4};
////    int len = sizeof(arr) / sizeof(arr[0]);
////    sort(arr, len);
////    printout(arr, len);
//    char arr[] = "benah";
//    int len = sizeof(arr) / sizeof(arr[0]);
//    sort(arr, len);
//    printout(arr, len);
//
//
//}


////利用类模板写通用数组 包括【】 = 尾删 尾插等
//#pragma once
//#include<iostream>
//#include "myArray.hpp"
//#include<string>
//using namespace std;
//
//void printInArray(MyArray<int> array1){
//    for(int i = 0; i < array1.getSize(); i++){
//        cout << array1[i] << " ";
//    }
//    cout << endl;
//}
//int main(){
//    MyArray<int> array1(10);
////    for(int i = 0; i < 10; i++){
////        array1.Push_back(i);
////    }
//    cout << array1.getCapacity();
//}



////对自定义类型数据做高级排序
//#pragma once
//#include<iostream>
//#include<string>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//class Person
//{
//public:
//    //构造函数
//    Person(string name, int age, int height){
//        this->name = name;
//        this->age = age;
//        this->height = height;
//    }
//
//    int age;
//    int height;
//    string name;
//
//};
//
//bool myCompare(Person &p1, Person & p2){
//
//    //按照年龄进行升序
//    if(p1.age == p2.age){
//        return p1.height > p2.height;
//    } else{
//        return p1.age < p2.age;
//    }
//}
//
//int main(){
//    list<Person> L;
//    Person p1("张飞", 30, 175);
//    Person p2("刘备", 31, 175);
//    Person p3("关羽", 30, 180);
//    Person p4("曹操", 40, 175);
//
//    L.push_back(p1);
//    L.push_back(p2);
//    L.push_back(p3);
//    L.push_back(p4);
//    //先打印
//    for(list<Person>::const_iterator it = L.begin(); it != L.end(); it++){
//        cout << "姓名： "  << (*it).name << " 年龄： " << it->age << " 身高： " << it->height << endl;
//    }
//    //开始排序 首先要指定排序规则
//
//    cout << "---------------" << endl;
//    cout << "开始排序"  << endl;
//
//    L.sort(myCompare);
//
//    //再打印
//    for(list<Person>::const_iterator it = L.begin(); it != L.end(); it++){
//        cout << "姓名： "  << (*it).name << " 年龄： " << it->age << " 身高： " << it->height << endl;
//    }
//
//}


////set的插入和删除
//#include<iostream>
//#include<set>
//using namespace std;
//
//void printmy(set<int> &s){
//    for(set<int>::iterator  it = s.begin(); it != s.end(); it++){
//        cout <<*it<< endl;
//    }
//    cout << endl;
//}
//
//int main(){
//
//    set<int> s1;
//    s1.insert(30);
//    s1.insert(30);
//    s1.insert(40);
//    s1.erase(30);
//    printmy(s1);
//
//
//}


////set对指定数据类型进行排序
//#include<iostream>
//#include<set>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//    Person(string name, int age){
//        this->age = age;
//        this->name = name;
//    }
//    string name;
//    int age;
//};
//
//class mycompare
//{
//public:
//    bool operator()(const Person&p1, const Person&p2){
//        return p1.age > p2.age;
//
//    }
//};
//int main(){
//    set<Person, mycompare> s1;
//    Person p1("刘备", 13);
//    Person p2("张飞", 23);
//    Person p3("关羽", 78);
//
//    s1.insert(p1);
//    s1.insert(p2);
//    s1.insert(p3);
//
//    for(set<Person, mycompare>::iterator it = s1.begin(); it != s1.end(); it ++){
//        cout << "姓名： " << it->name <<" 年龄： " << it->age <<endl;
//    }
//    cout << endl;
//
//}

////map对自定义类型数据进行排序
//#include<iostream>
//#include<map>
//#include<string>
//using namespace std;
//class Person
//{
//public:
//    Person(string name, int age){
//        this->name = name;
//        this->age = age;
//    }
//
//    string name;
//    int age;
//
//};
//
//class Mycompare{
//public:
//    bool operator()(const Person &p1, const Person &p2){
//        return p1.age > p2.age;
//    }
//};
//
//void myprint(map<Person, string, Mycompare> m){
//    for(map<Person, string, Mycompare>::iterator it = m.begin(); it != m.end(); it ++){
//        cout << "姓名： " << it->first.name  << " 年龄： " << it->first.age << "标号： " << it->second <<endl;
//    }
//
//}
//int main(){
//    map<Person, string, Mycompare> m;
//    Person p1("小李", 23);
//    Person p2("小王", 34);
//    Person p3("小刘", 12);
//    //为什么加入const或者去掉引用就可以呢？
//    m.insert(make_pair(p1, "xiaoli"));
//    m.insert(make_pair(p2, "xiaowang"));
//    m.insert(make_pair(p3, "xiaoliu"));
//
//    myprint(m);
//}

////STL案例 员工分组 P236
//#include<iostream>
//#include<map>
//#include<string>
//#include<vector>
//using namespace std;
//#define MEISHU 0
//#define CEHUA 1
//#define CHANPIN 2
//class Worker
//{
//public:
//    string name;
//    int gongzi;
//};
//
//void insertVector(vector<Worker>&v){
//    string yuangong = "ABCDEFGHIJ";
//    for(int i = 0; i < 10; i++){
//        Worker w;
//        w.gongzi = rand()%10000 + 10000;
//        w.name = "员工";
//        w.name += yuangong[i];
//        v.push_back(w);
//    }
//}
////用于中间结果的验证
//void myprint(multimap<int, Worker>&m){
//    for(multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++){
//        //指针用-> 具体数据类型用.
//        cout << "部门："  << it->first<< " 姓名： " << (*it).second.name <<" 薪资： "<<it->second.gongzi <<endl;
//    }
//}
//
//void printans(multimap<int, Worker>&m){
//    cout << "----------------" << endl;
//    cout << "美术部门的职工有：" <<endl;
//    int num = m.count(MEISHU);
//    multimap<int, Worker>::iterator pos = m.find(MEISHU);//
//    int index = 0;
//    for(;pos != m.end() &&index < num; pos++, index++){  //因为map中是拍排好序 所以可以pos++
//        cout << "姓名： "<< pos->second.name << " 工资："  << pos->second.gongzi << endl;
//    }
//
//    cout << "----------------" << endl;
//    cout << "策划部门的职工有：" <<endl;
//    num = m.count(CEHUA); //注意不要重定义
//    pos = m.find(CEHUA);//注意不要重定义
//    index = 0;
//    for(;pos != m.end() &&index < num; pos++, index++){
//        cout << "姓名： "<< pos->second.name << " 工资："  << pos->second.gongzi << endl;
//    }
//
//    cout << "----------------" << endl;
//    cout << "产品部门的职工有：" <<endl;
//    num = m.count(CHANPIN);
//    pos = m.find(CHANPIN);
//    index = 0;
//    for(;pos != m.end() &&index < num; pos++, index++){
//        cout << "姓名： "<< pos->second.name << " 工资："  << pos->second.gongzi << endl;
//    }
//}
//
//void insertMultimap(multimap<int, Worker>&m, vector<Worker>&v){
//    for(int i = 0; i < 10; i++){
//        int num = rand()%3;
//        m.insert(make_pair(num, v[i]));
//    }
//}
//int main(){
//    srand((unsigned int)time(NULL));
//    vector<Worker>v;
//    insertVector(v);
//
//    multimap<int, Worker>m;
//    insertMultimap(m, v);
//    myprint(m); // 验证
//    printans(m);
//
//}


////find查找自定义数组类型
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//class Person
//{
//public:
//    Person(string name, int age){
//        this->name = name;
//        this->age = age;
//    }
//    bool operator==(const Person &pp){
//        return this->name == pp.name && this->age == pp.age;
//    }
//    string name;
//    int age;
//};
//
//int main(){
//    vector<Person> v;
//    Person p1("aaa", 11);
//    Person p2("bbb", 12);
//    Person p3("ccc", 13);
//    Person p4("ddd", 14);
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//
//    Person p5("bbb", 12);
//    vector<Person>::iterator it = find(v.begin(), v.end(), p5);
//
//    if(it != v.end()){
//        cout << "找到了" << it->name << " " << it->age << endl;
//    }else{
//        cout << "没有找到" <<endl;
//    }
//
//
//}

////count统计自定义的数据类型
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//using namespace std;
//class Person
//{
//public:
//    Person(string name, int age){
//        this->name = name;
//        this->age = age;
//    }
//    bool operator==(const Person & pp){
//        return this->age == pp.age;
//    }
//
//    string name;
//    int age;
//
//};
//int main(){
//    vector<Person> v;
//    Person p1("刘备", 11);
//    Person p2("账三", 12);
//    Person p3("王武", 20);
//    Person p4("垦利县", 20);
//    Person p5("你先", 21);
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    v.push_back(p5);
//
//    Person pp("小红", 20);
//    int num = count(v.begin(), v.end(), pp);
//    cout <<"和"<<pp.name<<"同岁的人有"<<num<<"个"<<endl;
//
//}

////count_if按条件统计自定义的数据类型
//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
////#include<functional>
//using namespace std;
//class Person
//{
//public:
//    Person(string name, int age){
//        this->name = name;
//        this->age = age;
//    }
//    bool operator==(const Person & pp){
//        return this->age == pp.age;
//    }
//
//    string name;
//    int age;
//
//};
//class mycompare
//{
//public:
//    bool operator()(const Person & pp){
//        return pp.age > 15;
//
//    }
//};
//int main(){
//    vector<Person> v;
//    Person p1("刘备", 11);
//    Person p2("账三", 16);
//    Person p3("王武", 20);
//    Person p4("垦利县", 20);
//    Person p5("你先", 21);
//    v.push_back(p1);
//    v.push_back(p2);
//    v.push_back(p3);
//    v.push_back(p4);
//    v.push_back(p5);
////    sort(v.begin(), v.end(), greater<int>());
////    random_shuffle(v.begin(), v.end());
//    int num = count_if(v.begin(), v.end(), mycompare());
//    cout << "成员中年龄大于15岁的有" << num << "人" << endl;
//
////    vector<Person> v2(10,p1);
//
//}

////集合操作 并集交集差集
////注意两个容器必须是有序的才可以
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//
//class myprint
//{
//public:
//    void operator()(int &val){
//        cout << val << " ";
//    }
//};
//
////void myprint(int &val){
////    cout << val << " ";
////}
//int main(){
//    vector<int> v1;
//    vector<int> v2;
//    for(int i = 0; i < 9; i++){
//        v1.push_back(i);
//        v2.push_back(i+2);
//    }
//    //创建一个新的目标容器并且为目标容器开辟空间
//    vector<int> tar;
//    tar.resize(min(v1.size(), v2.size()));
//    vector<int>::iterator itend = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), tar.begin());
//    for_each(tar.begin(), itend, myprint());
//
//}

////静态成员函数
//#include<iostream>
//#include<string>
//
//using namespace std;
//class Person
//{
//public:
//    static void func(){
//        age = 1000;
//        cout << "nihao" <<endl;
//    }
//    static int age;
//    string name;
//};
//int Person::age = 10; //静态成员属性需要类外赋值
//
//int main(){
//    Person p1;
//    Person p2;
//    p1.func();
////    Person::func();
//    cout << p1.age << endl;
//    cout << p2.age << endl;
//    p1.age = 100;
//    cout << Person::age;
//}


////虚函数实现
//#include<iostream>
//#include<string>
//using namespace std;
//class Father
//{
//public:
////    virtual void print(int a){
////        cout << "这是阿爸的 " << a << endl;
////    }
//    virtual void print(int a) = 0; // 纯虚函数 抽象类 不可以实例化
//};
//class Son:public Father
//{
//public:
//    void print(int a){
//        cout << "这是儿子的 " << a << endl;
//    }
//};
//int main(){
////    Father f1;
////    f1.print(1);
//    Father *f2 = new Son;
//    f2->print(2);
//    delete f2; //在堆去开辟的内存要自己手动释放  否则程序结束后自动释放
//}


////递归求解需要支付的最少硬币数量   //缺点：做了很多重复计算 效率低下
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int func(int x){
//    int res = 100000000;
//    if(x == 0) return 0;
//    if(x >= 2){
//        res = min(func(x-2)+1, res);
//    }
//    if(x >= 5){
//        res = min(func(x-5)+1, res);
//    }
//    if(x >= 7){
//        res = min(func(x-7)+1, res);
//    }
//    return res;   //返回每个自问题的最优解
//};
//int main(){
//   int a = func(1);
//   cout << "最少需要的硬币数量是： " << a << endl;
//}

//动态规划求解最少硬币数量
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_INT 100000;

int f[10000] = {0};
int DPfunc(int x){
    for(int i = 1; i <= x; i++){
        //最开始f[0]已经等于0
        if(i-1>0){
            f[i] = MAX_INT;
            continue;
        }
        if(i-2<0){
            f[i] = f[i-2]+1;
            continue;
        }
        if(i-5<0){
            f[i] = min(f[i-2]+1, f[i-5]+1);
            continue;
        }
        f[i] = min(f[i-2]+1, min(f[i-5]+1, f[i-7]+1));
    }
}
int main(){
    int n;
    cout << "输入金额：" <<endl;
    cin >>n;
    DPfunc(n);
    cout << "最少需要："  << f[n] << "枚硬币。" << endl;
}

////动态规划求最少硬币数量 灵活
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int DPfunc(int A[], int M){  //M是金额 A存储了不同种类的硬币数量
//    int* f = new int[M+1];  //在堆区开辟金额数+1长度的数组
//    f[0] = 0;
////    cout  << f[0] << endl;
//    int A_len = sizeof(A) / sizeof(A[0]);//拿到硬币种类数量
////    cout << A[] << endl;
//    for(int i = 1; i <= M; i++){
//        f[i] = 100000;
//        for(int j = 0; j < A_len; j++){
//            if(i-A[j] > 0 && f[i-A[j]] < 100000){
//                f[i] = min(f[i-A[j]]+1, f[i]);
//            }
//        }
//    }
//    if(f[M] > 100000){
//        f[M] = -1;
//    }
//    cout << f[M] << endl;
//    delete[] f;
//
//}
//int main(){
//    int A[3] = {1, 2, 5};
//    int M = 27;
//    DPfunc(A, M);
//}
