#include <iostream>


using std::cout;
using std::endl;
int global_func(){
    return 222;
}




namespace {

int anno_func(){
    return 888;
}

}
