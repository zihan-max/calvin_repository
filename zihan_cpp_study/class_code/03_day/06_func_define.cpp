#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

// 函数成员的定义方式2，在类中声明，在类外部定义
class Computer{
private:
    char _brand[20];
    int _price;
public:
    void setPrice(int price);

    void setBrand(const char * brand);

    void print();
};

void Computer::setBrand(const char * brand){
    strcpy(_brand,brand);
}

void Computer::setPrice(int price){
    _price = price;
}
void Computer::print(){
    cout << _brand << "     " << _price << endl; 
}
int main()
{
     Computer c1;
     c1.setBrand("dell");
     c1.setPrice(7500);
     c1.print();
    return 0;
}

