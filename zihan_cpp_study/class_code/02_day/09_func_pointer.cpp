
// 使用函数指针来完成一个简单的计算器功能
#include <iostream>
using std::cout;
using std::endl;


int add(int x,int y){
    return x+y;
}

int sub(int x,int y){
    return x-y;
}

int multiply(int x,int y){
    return x*y;
}

int divide(int x,int y){
    return x/y;
}
int caculate(int leftnum,const char operation,int rightnum){
    // 声明一个函数指针，指向int (int ,int)类型的函数
    int (*p) (int ,int);
    if(operation == '+'){
        p = add;
    }else if(operation == '-'){
        p = sub;
    }else if(operation == '*'){
        p = multiply;
    }else if(operation == '/'){
        p = divide;
    }

    return p(leftnum,rightnum);

}


void test(){
    cout << caculate(20,'+',10) << endl;
    cout << caculate(20,'-',10) << endl;
    cout << caculate(20,'*',10) << endl;
    cout << caculate(20,'/',10) << endl;
}
int main()
{
    test();
    return 0;
}

