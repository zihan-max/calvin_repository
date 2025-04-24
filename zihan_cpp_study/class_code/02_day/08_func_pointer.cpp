#include <iostream>
using std::endl;
using std::cout;


// 函数指针与指针函数
int add(int x,int y){
    return x+y;
}


void test(){
    // 函数指针，指向一个函数的指针
    int (*p)(int ,int) = add;
    int (*p1)(int ,int) = &add;
    
    // 后续调用该函数，可以直接调用add函数
    // 也可以通过函数指针来进行调用
    cout << add(1,2) << endl;
    cout << p(1,8) << endl;

    cout << p1(222,222) << endl;


}

int num1 = 999;
// 指针函数,就是返回值是个指针
int * func(){
    return &num1;

}


int main()
{
    test();
    int *pq = func();
    cout << *pq << endl;
    return 0;
}

