#include "test.h"

void Computer::print(){
    cout << _brand << "     " << _price << endl;
}

void Computer::set_Brand(const char * brand){
    strcpy(_brand,brand);
}
void Computer::set_price(float price){
    _price = price;
}



