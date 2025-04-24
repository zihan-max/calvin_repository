#include <iostream>

extern "C"{
    float a = 999;
    void my_cpp_fun(){
        std::cout << "my_cpp_fun()727272" << std::endl;
    }
}


