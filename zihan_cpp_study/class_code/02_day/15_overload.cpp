#include <iostream>

using std::endl;
using std::cout;

// 函数重载：C++中允许存在多个函数名称相同，参数列表不同的函数
int add(int x ,int y){
    cout << "add(int,int)" << endl;
    return x + y;    
}

int add(int x, int y, int z){
    return x + y + z;
}

int add(int x, float y , double z){
    return x + y + z;
}

int add(int x, double y, float z){
    return x + y + z;
}

double add(double x, double y){
    cout << "add(double,double)" << endl;
    return x + y; 
}
void test(){
    int a = 3,b = 4;
    cout << add(a,b) << endl;
    double c = 1,d = 3;
    cout << add(c,d) << endl;

}

void test2(){

    int *p = static_cast<int *>(malloc(sizeof(int)));
    free(p);


}
int main()
{
    test();
    return 0;
}