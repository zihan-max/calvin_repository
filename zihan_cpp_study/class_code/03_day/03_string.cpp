#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


void test(){
    string s1;
    string s2("hello");

    cout << s1 << endl;
    cout << s2 << endl;
    s1 = s2;
    cout << s1 << endl;

    //计算s2字符串的长度
    cout << s2.size() << endl;
    cout << s2.length() << endl;
}

void test1(){
    string s1 = "hello";
    string s2 = ", zihan";
    s1 += s2;
    cout << s1 << endl;
    cout << s2 << endl;
}
int main()
{
    test1();
    return 0;
}

