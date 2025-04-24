#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

void test(int a, const char * operation, int b){
    int (*pFunc)(int,int);// 函数指针pFunc，指向返回值为int，参数为(int,int)的函数。
    if(operation == "+"){
        pFunc = add;
    }else if(operation == "-"){
        pFunc = sub;
    }else if(operation == "*"){
        pFunc = multiply;
    }else if(operation == "/"){
        pFunc = divide;
    }else{
        cout << "operation error" << endl;
        return;
    }
    cout << a << operation << b << "=";
    cout << pFunc(a,b) << endl;
}

int main() {

    test(10, "+", 20);
    test(10, "-", 20);
    test(10, "*", 20);
    test(10, "/", 20);
    return 0;
}