#include <iostream>

using std::cout;
using std::endl;

void test1(){
    // 修饰内置基本数据类型
    int num = 20;
    num = 30;
    const int num2 = 100;
    // num2 = 999;// const常量的值不能再修改
}

void test2(){
    int num1 = 100;
    int num2 = 200;
    int const *p = &num1;
   // *p = 999;// 可以改变指向，但不能通过指针修改指向的值
    p = &num2;
}

void test3(){
    int num1 = 100;
    int num2 = 200;
    int * const p = &num1;
    // 可以通过指针修改指向的值。但是不能修改指针的指向
    *p = 999;
    // p = &num2;
}

void test4(){
    const int num = 100;
    // int * p = &num; 出于安全性考虑，不允许这样做

}

void test5(){
    int num1 = 10;
    int num2 = 20;
    const int * const p = &num1;
    //*p = 100;
    // p = &num2;
}
int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

