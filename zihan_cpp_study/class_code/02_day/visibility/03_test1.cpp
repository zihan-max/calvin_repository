#include <iostream>

using std::cout;
using std::endl;

extern int global_func();

//extern int anno_func();


void test(){
    int result = global_func();
   // int result2 = anno_func();
    cout << result << "  " << endl;
}

int main()
{
    test();
    return 0;
}

