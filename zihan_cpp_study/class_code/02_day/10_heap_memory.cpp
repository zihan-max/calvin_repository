#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

// 操作堆内存空间
void test1(){
    // 使用C语言
    // 申请int大小的堆空间
    int *pInt = (int *)malloc(sizeof(int));

    memset(pInt,0,sizeof(int));

    *pInt = 1212;
    cout << pInt << "  " << *pInt << endl;

    free(pInt);
    pInt = nullptr;
}

// 使用new\delete来操作
void test2(){
    int *pInt = new int();
    *pInt = 100;
    cout << pInt << "  " << *pInt << endl;
    delete pInt;
}

// C语言申请数组空间
void test3(){
    int *p = (int *)malloc(5 * sizeof(int));
    memset(p,0,sizeof(int)*5);
    for(ssize_t i = 0;i < 5;++i){
        p[i] = i;
        cout << p[i] << "  ";
    }
    cout << endl;
    free(p);
}
// 在C++中，申请数组空间
void test4(){
    int *p = new int[5]();
    for(ssize_t i = 0;i < 5;++i){
        p[i] = i;
        cout << p[i] << "  ";
    }
    cout << endl;
    delete [] p;// 注意，删除数组，需要加一个中括号
    p = nullptr;

}

// C++中申请字符数组
void test5(){
    char * p = new char[6]();
    p[0] = 'h';
    p[1] = 'e';
    p[2] = 'l';
    p[3] = 'l';
    p[4] = 'o';
    for(ssize_t i = 0;i < 6;++i){
        cout << p[i] << " ";
    }
    cout << endl;
    delete [] p;

}

// 字符数组
void test6(){
    char * p = new char [6] ();
    strcpy(p,"zihan");
    cout << p << endl;
    delete [] p;
}

void test7(){
    const char *p = "hello zihan";
    cout << p << endl;

}

void test8(){
    char str[6] = {'h','e','l','l','o','\0'};
    char str2[6] = "zihan";

    cout << str << endl;
    cout << str2 << endl;
}
void test9(){
    int *p = new int(999);
    cout << *p << endl;
    cout << p << endl;
    cout << &p << endl;
    delete p;
    p = nullptr;
    cout << p << endl;
    //cout << *p << endl;

}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    return 0;
}

