#ifndef __TEST_H__
#define __TEST_H__

#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

class Computer{
private:
       char _brand[20];
       float _price;
public:
       void print();
       void set_Brand(const char * brand);
       void set_price(float price);
};



#endif 
