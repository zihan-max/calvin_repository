#include <iostream>



using std::cout;
using std::endl;

// 看一下各种变量的默认值
// 全局变量
int globalNum;
static int staticNum;



void test(){
    int localNum;
    int * localPointer;


    int *pInt = new int();
    cout << "栈区localNumber=" << localNum << endl;
    cout << "栈区localPointer=" << *localPointer << endl;
    cout << "堆区pInt=" << *pInt << endl;
    cout << "全局globalNumber=" << globalNum << endl;
    cout << "静态staticNumber=" << staticNum << endl;


}

int main(){
    test();
    return 0;
}

