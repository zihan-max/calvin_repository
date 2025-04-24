#include <iostream>
namespace zihan{
    int num = 10;
    const int days = 7;
    void print(){
        std::cout << "zihan::print()" << std::endl;
    }
}; // the end of namespace zihan

int main()
{
    std::cout << "zihan num = " << zihan::num << std::endl;
    zihan::print();
    return 0;
}



