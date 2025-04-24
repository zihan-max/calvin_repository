#include <iostream>




namespace zihan{

    int cout(){
        std::cout << "hhhhhh" << std::endl;
        return 1;
    }

}// end of namespace zihan

int main()
{
    std::cout << "hello" << std::endl;
    std::cout << zihan::cout() << std::endl;
    return 0;
}

