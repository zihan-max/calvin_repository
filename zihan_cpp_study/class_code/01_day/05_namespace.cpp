#include <iostream>
using std::cout;
using std::endl;

namespace zihan{
    int cout(){
        std::cout << "hhhhhh" << endl;
        return 222;
    }
}// the end of namespace zihan



int main()
{
    using namespace zihan;
    std::cout << zihan::cout() << endl;
    
        

   
    return 0;
}

