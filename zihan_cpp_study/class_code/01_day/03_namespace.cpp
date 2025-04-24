#include <iostream>
//using namespace std;

namespace zihan{

    int cout(){
        return 1;
    }
}// the end of namespace zihan

using namespace zihan;
void test(){
    
    cout();
}



int main()
{
    test();
    return 0;
}

