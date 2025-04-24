#include <iostream>
using std::cout;
using std::endl;


// 事先声明
namespace wd{
    void display();
    void show();

}

namespace wh{
    void print(){
        cout << "wh::print()" << endl;
    }
    void show(){
        cout << "wh::show()" << endl;
        wd::display();
    }

}// the end of namespace wh

namespace wd{
    void display(){
        cout << "wd::display()" << endl;
        wh::print();
    }
    void show(){
        cout << "wd::show()" << endl;
        wh::show();
    }

}// the end of namespace wh

void test(){
    wd::show();
}
int main()
{
    test();
    return 0;
}

