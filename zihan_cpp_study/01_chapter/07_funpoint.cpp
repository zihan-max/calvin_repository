#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int add(int x,int y){
    return x + y;
}

// 函数指针
void test(){
    // 定义函数指针时要确定其指向的函数的返回类型和参数类型
    // 省略写法
    int (*p)(int,int) = add;
    cout << p(1,2) << endl;

    // 完整写法
    int (*p2)(int,int) = &add;
    cout << (*p2)(1,3) << endl;
}


// 指针函数,返回值为指针
// 需要确保返回值这个指针指向的声明变量要比函数要长
    int num = 100;
    int* fun1(){
        int* p = &num;
        return p;
    }

int main()
{
    test();
    cout << *fun1() << endl;
    return 0;
}

