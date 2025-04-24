#include <iostream>

using std::endl;
using std::cout;

int globalnum;
static int staticnum;

const int constnum = 12;



void test(){
    int localNumber;

    int * localPointer;

    //如果在函数内部定义一个常量，存储在哪呢？
    //并没有真正存储在文件常量区，而是存储在栈区
    const int constNumberlocal = 3;

    //char *建议要加上const？
    //因为文字常量区里面的数据都是无法被修改的
    //如果语法层面允许使用一个普通的指针指向文字常量
    //那么就意味着操作上通过指针区修改常量的数据是可以的
    //但是又因为文字常量区无法被修改，所以运行绝对报错
    //没有加一个const会出现一个警告，其实就是相当于一个编译时的提醒·
    const char * pstr = "hello,world";

    //int * pInt = new int();
    //可以再括号里面输入一个初始化的值
    //注意：此时pInt是一个栈变量------>指向堆内存空间
    int * pInt = new int(7);
    
    cout << "栈区&localNumber=" << &localNumber << endl;
    cout << "栈区&localPointer=" << &localPointer << endl;
    cout << "堆区pInt=" << pInt << endl;
    cout << "全局/静态区globalNumber=" << &globalnum << endl;
    cout << "全局/静态区staticNumber=" << &staticnum << endl;
    cout << "文字常量区constNumber=" << &constnum << endl;
    //实际上是cout针对char*做了一个重载，优化机制
    //打印char*指针的时候，会直接打印字符的内容，而不是地址
    //如果希望打印地址，则强转为void*即可
    cout << "文字常量区pstr=" << (void*)pstr << endl;
    //cout << "文字常量区pstr=" << &pstr << endl;
    cout << "文字常量区constNumberlocal=" << &constNumberlocal << endl;
    //对test()函数取地址
    //
    //对函数取地址，实际上得到的便是函数指针
    //cout并没有针对函数指针的输出方式，隐式转换成bool类型
    //如果存在则返回1，如果不存在则返回0
    //解决方案也是强转成void*类型
    cout << "程序代码区test()地址=" << (void*)test << endl;

}
int main()
{
    test();
    return 0;
}

