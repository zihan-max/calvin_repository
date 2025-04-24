#include <iostream>

using std::cout;
using std::endl;

int global_func(){

    return 1210;
}

namespace {
    int ann_fun(){
        return 20;
    }
}



void test(){

    cout << global_func() << endl;


}


