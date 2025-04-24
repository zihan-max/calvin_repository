#include <iostream>
using std::cout;
using std::endl;


double division(double x,double y){
    if(y == 0){
        throw "Division by zero";
    }else if(x == 0){
        throw 0;
    }else{
        return x/y;
    }
}

void test(){
    try{
        cout << division(0,12) << endl;
        //cout << division(100,0) << endl;
        //cout << division(24,12) << endl;
    }catch(const char * msg){
        cout << "除数为0, " << msg << endl;
    }catch (int x){
        cout << "被除数为0, " << x << endl;
    }
    cout << "proceed" << endl;
}
int main()
{
    test();
    return 0;
}

