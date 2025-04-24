#include <iostream>

using std::cout;
using std::endl;


#define MAX(x,y) (x) > (y) ? (x) : (y)

inline int max(int x,int y){
    return x > y ? x : y;
}

void test(){
    int a = 1,b = 2;
    int result = MAX(a,b);
    cout << result << endl;
}

void test2(){
    int result1 = MAX(1,2) + 10;
    int result2 = max(1,2) + 10;
    cout << result1 << "  " << result2 << endl;
}


int main()
{
    test2();
    return 0;
}

