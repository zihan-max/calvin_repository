#include <iostream>
using std::endl;
using std::cout;
void func(int x, int y = 0){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
void test0(){
    func(24,30);
    func(100);
}
int main(){
    test0();
    return 0;
}

