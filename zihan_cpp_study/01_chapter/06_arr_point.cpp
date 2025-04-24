#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void test1(){
    // 数组指针，指向数组的指针
    int arr[] = {1,2,3,4,5};
    // 代表数组首个元素的首地址
    cout << arr << endl;
    cout << arr + 1 << endl;

    // 代表数组的首地址
    cout << &arr << endl;
    cout << &arr + 1 << endl;
    int (*p)[5] = &arr;
    for(int i = 0;i < 5;i++){
        cout << (*p)[i] << "  ";
    }
    cout << endl;
}
void test2(){
    int num = 1,num2 = 2,num3 = 3;
    int * p1 = &num;
    int * p2 = &num2;
    int * p3 = &num3;
    int *arr[3] = {p1,p2,p3};
    for(int i = 0;i < 3;++i){
        cout << *arr[i] << "  ";
    }
    cout << endl;
}
int main()
{
    test1();
    test2();
    return 0;
}

