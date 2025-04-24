#include <iostream>
using std::cout;
using std::endl;
// 先提前声明
namespace wd{
    void show();
    void display();
}

namespace wh{
void print(){
    cout << "wh:print" << endl;
}
void show(){
    cout << "wh:show"<< endl;
    wd::display();
}
}

namespace wd{
void display(){
    cout << "wd::display" << endl;
    wh::print();
}

void show(){
    cout << "wd:show"<< endl;
    wh::show();
}
}

int main()
{
    wd::show();
    return 0;
}