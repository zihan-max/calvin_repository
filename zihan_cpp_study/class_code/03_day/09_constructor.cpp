#include <iostream>
using std::cout;
using std::endl;

class Point{
public:
    Point(int x = 1, int y = 1)
    :_x(x)
    ,_y(_y)
    {
        cout << "Point(int,int)" << endl;
    }
    void print(){
        cout << "_x=" << _x << ",_y=" << _y << endl;
    }

private:
    int _x;
    int _y;
};
void test(){
    Point pt;
}




void test2(){
    Point pt(3);
    pt.print();
}

int main()
{
    test();
    return 0;
}

