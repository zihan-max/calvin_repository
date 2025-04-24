#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

#define MAX(X,Y) ((X)>(Y)?(X):(Y))
#define MULTIPLY(X,Y) ((X)*(Y))

// 在普通函数的定义之前加上inline
// 表示向编译器提出内联的建议
// 如果编译器采用了内联
// 就会在编译阶段进行替换
inline int mutiply(int x,int y){
    return x*y;
}
void test(){
    int a = 2,b = 3,c = 4;
    cout << MULTIPLY(a + b,c) << endl;

    cout << mutiply(a + b,c) << endl;
}

double division(double x, double y){
    if(y == 0)
        throw "Division by zero condition!";
    return x / y;
}




void test1(){
    string str = "hello world";
    //求字符串长度
    int len = str.length();
    int len2 = str.size();
    cout << len << endl;
    cout << len2 << endl;

}

void test2(){
    string str = "hello world";
    //字符串的拼接
    str = str + " hello cpp";
    cout << str << endl;
    str += 'A';
    cout << str << endl;
    str.append("hello linux");
    cout << str << endl;
}
int main()
{
    test2();
    return 0;
}

