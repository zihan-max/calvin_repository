#include <iostream>




namespace zihan{
    int cout(){
        printf("ziahnhhhhhh\n");
        return 12;
    }




}// the end of namespace zihan



void test(){
    using std::cout;
    using std::endl;
    cout << "hello test()" << endl;
}
void test2(){
    using namespace std;
    cout << "hello test2()" << endl;
}

void test3(){
    using zihan::cout;
    cout();
}

void test4(){
    using namespace zihan;
    cout();
}
int main()
{
    test();
    test2();
    test3();
    test4();

    return 0;
}

