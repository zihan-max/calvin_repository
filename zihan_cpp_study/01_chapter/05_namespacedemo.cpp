#include <iostream>
using std::cout;
using std::endl;

//全局命名空间
int number = 10;

//匿名命名空间
namespace{
 int digit = 20;
}

//当前函数也是属于全局命名空间
void test1(){
 //打印全局命名空间的number
 cout << "访问全局命名空间number=" << number << endl;
 cout << "访问全局命名空间number=" << ::number << endl;
 //访问匿名命名空间的digit
 cout << "访问匿名命名空间digit=" << digit << endl;
 cout << "访问匿名命名空间digit=" << ::digit << endl;

}
int main()
{
 test1();
 return 0;
}