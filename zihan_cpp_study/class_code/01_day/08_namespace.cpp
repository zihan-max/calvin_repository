#include <iostream>
using std::cout;
using std::endl;

namespace zihan{

int num = 100;
    namespace ziyang{
        int num = 200;
    }


}

void test(){
    cout << zihan::num << endl;
    cout << zihan::ziyang::num << endl;
}

void test1(){
    using namespace zihan;
    cout << num << endl;
    cout << ziyang::num << endl;

}

void test2(){
    //using zihan::ziyang::num;
     using zihan::num;
    cout << num << endl;

}
void test3(){
    using namespace zihan::ziyang;
    cout << num << endl;
}
int main()
{
    
    test2();
    

    return 0;
}

