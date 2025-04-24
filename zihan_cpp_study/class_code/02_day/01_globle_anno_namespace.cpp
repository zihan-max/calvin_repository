#include <iostream>
using std::cout;
using std::endl;

// 全局匿名空间VS匿名匿名空间
// 相似点：访问方式差不多
// 区别：区别在于是否对外部文件可见

int global_namespace = 10;


// 匿名命名空间
namespace{

    int annonamespace = 20;

}

void test(){
    // 访问全局命名空间的变量
    cout << global_namespace << endl;
    cout << ::global_namespace << endl;    
    // 访问匿名
    cout << annonamespace << endl;
    cout << ::annonamespace << endl;

}

int main()
{

    test();
    return 0;
}

