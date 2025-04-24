#include <iostream>

using std::cout;
using std::endl;

// 引用：变量的别名




void test(){
    int num = 10;

    int & ref = num;

    cout << num << endl;
    cout << ref << endl;
    cout << &num << endl;
    cout << &ref << endl;

    cout << "==================" << endl;
    int num2 = 20;
    ref = num2;
    cout << num << endl;
    cout << ref << endl;
    cout << &num << endl;
    cout << &ref << endl;


    cout << num2 << endl;
    cout << &num2 << endl;


}
// 使用引用和指针来操作某个变量
void test2(){
    int num = 10;
    int *p = &num;
    int &ref = num;
    // 通过指针修改变量的值
    *p = 20;
    cout << num << endl;

    ref = 30;
    cout << num << endl;

    cout << sizeof(p) << endl;
    cout << sizeof(ref) << endl;

    cout << p << endl;
    cout << p +1 << endl;
    cout << ref + 1 << endl;


}
int main()
{
    test2();
    return 0;
}

