#include <iostream>

using namespace std;

namespace zihan{
 int number = 10;
}// the end of namespace zihan
namespace ziyang{
 int number = 20;
}// the end of namespace ziyang
void test1(){
 //此处希望使用zihan里面的number
 using namespace zihan;
 cout << number << endl;
}
void test2(){
 //此处希望使用ziyang里面的number
 using namespace ziyang;
 cout << number << endl;
 cout << zihan::number << endl;
}
int main()
{
 test1();
 test2();
 return 0;
}