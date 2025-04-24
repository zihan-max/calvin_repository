#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

// 分为两大类：char * 类型，char[]类型
void test(){
    // 先介绍char * 类型，里面可以进一步分为两种形式
    // 1、直接使用一个指针指向常量区
    const char * p = "hello zihan";
    p = "hello ziyang";
    cout << p << endl;
}
void test2(){
    const char * pstr = "hello zihan";
    // 直接在堆区开辟一块内存空间，使用char * 指向他
    char * pstr2 = new char[12]();
    strcpy(pstr2,pstr);
    cout << pstr2 << endl;
    delete []pstr2;
    cout << "==================" << endl;
    pstr2 = new char[15]();
    strcpy(pstr2,"hello,C++");
    cout << pstr2 << endl;
    delete [] pstr2;
    pstr2 = nullptr;
}

void test3(){
    char str[] = "hello";
    // 不能改变指向，但是可以改变指向的值
    
}

int main()
{
    test();
    test2();
    return 0;
}

