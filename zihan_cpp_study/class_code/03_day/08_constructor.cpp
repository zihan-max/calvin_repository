#include <iostream>
using std::cout;
using std::endl;

class Point{
public:
    Point(int value)
    :_y(value)
    ,_x(_y)
    {
        cout << "Point(int,int)" << endl;
    }

    Point(){
        cout << "Point()" << endl;
    }




    void print(){
        cout << "_x=" << _x << ",_y=" << _y << endl;
    }




private:
    int _x;
    int _y;
};



void test(){
    //这种写法实际上底层调用的是无参构造函数
    //那么此时还有无参构造函数嘛？？？
    Point pt;
   // Point pt2(2, 3);
   // pt2.print();
}

void test2(){
    Point pt(3);
    pt.print();
}

int main()
{
    test();
    test2();
    return 0;
}

