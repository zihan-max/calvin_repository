#include <iostream>

using std::endl;
using std::cout;

// void func(int x = 0,int y = 0){
//     cout << "x = " << x << ", y = " << y << endl;
// }


//void func2(int x = 0,int y = 0);

// void test(){
//     func();
//     func(12,21);
//     func(11);

//     cout << "===============================" << endl;

//     //func2();
//     func2(12,21);
//     func2(11);

// }

void func(int x = 0,int y = 0){
    cout << "x = " << x << " y = " << y << endl;
}



void test(){
    func(12);

}

int main()
{
    test();
    return 0;
}

