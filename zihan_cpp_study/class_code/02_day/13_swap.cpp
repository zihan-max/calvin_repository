#include <iostream>


using std::cout;
using std::endl;


//引用作为函数的返回值
int num = 100;
int func_copy(){
    cout << "func(): " << &num << endl;
    return num; 
}

int & func(){
    cout << "func(): " << &num << endl;
    return num;
}
// int & func2(){
//     int a = 10;
//     return a;
// }

void test(){
    // 函数返回时，会默认发生一次复制操作
    int result = func_copy();
    cout << "test(): " << &result << endl;
}
void test2(){
    int &result = func();
    cout << "func(): " << &result << endl;
}

int main()
{
    cout << &num << endl;
    test2();
    return 0;
}

