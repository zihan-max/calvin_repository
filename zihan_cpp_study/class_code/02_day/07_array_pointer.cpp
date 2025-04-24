#include <iostream>



using std::endl;
using std::cout;

void test(){
    int arr[5] = {1,2,3,4,5};
    int (*p)[5] = &arr;
    cout << "arr = " << arr << endl;  // 数组名 arr 会隐式转换为指向数组首元素的指针，所以这里输出的是数组首元素的地址
    cout << "&arr = " << &arr << endl;// &arr 得到的是整个数组的地址，尽管它的值和 arr 相同，但它们的类型不一样。
                                      // arr 是 int* 类型，而 &arr 是 int (*)[5] 类型。

    cout << "arr+1 = " << arr+1 << endl;
    cout << "*(arr+1) = " << *(arr+1) << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "&arr + 1 = " << &arr + 1 << endl;
}

void test2(){
    // 指针数组
    int a = 10,b = 20,c = 30;
    int *p[3] = {&a,&b,&c};
    for(ssize_t i = 0;i < 3;i++){
        cout << p[i] << endl;
        cout << *p[i] << endl;
    }
}
int main()
{
    test2();
    return 0;
}

