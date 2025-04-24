#include <iostream>

using std::cout;
using std::endl;


// class 的默认访问权限是private
class Computer{
private:
    char _brand[20];
    float _price;
public:
    void setPrice(float price){
        _price = price;
    }
};

// struct的默认访问权限是public
struct Student{
    int age;
};



void test(){
    Computer c1;
    c1.setPrice(10000);

    Student s1;
    s1.age = 10;


}
int main(){
    std::cout << "Hello world" << std::endl;
    return 0;
}

