#include <iostream>
using std::cout;
using std::endl;

// 探究不同区域变量的地址值
int globalnum;
static int staticnum;


void test(){
    int localnum;
    int * localPointer;
    int *p = new int();

    cout << "栈区&localNumber=" << &localnum << endl;
    cout << "栈区&localPointer=" << &localPointer << endl;
    cout << "堆区pInt=" << p << endl;


}

int main()
{
    test();
    return 0;
}

