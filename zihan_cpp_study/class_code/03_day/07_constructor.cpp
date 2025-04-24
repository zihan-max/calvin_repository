#include <iostream>



using std::cout;
using std::endl;


class Point{
private:
    int _x;
    int _y;
public:

    // 提供一个无参构造函数
    Point(){
        cout << "Point()" << endl;
    }

    // 构造函数
    Point(int x,int y){
        _x = x;
        _y = y;
        cout << "Point(int ,int)" << endl;
    }


    void print(){
        cout << "_x=" << _x << ",_y=" << _y << endl;
    }


};


int main()
{
    Point pt;
    Point pt2(12,2);
    pt.print();
    pt2.print();
    return 0;
}

