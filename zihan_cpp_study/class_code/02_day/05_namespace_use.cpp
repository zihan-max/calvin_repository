#include <iostream>


using std::cout;
using std::endl;

namespace wd{
    int num = 999;
}


void test(){
    cout << wd::num << endl;
    wd::num = 777;
    cout << wd::num << endl;
}
int main()
{
    test();
    return 0;
}

