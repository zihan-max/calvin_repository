#include <iostream>
// 交换两个数的值
using std::cout;
using std::endl;

void swap1(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}


void swap2(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap3(int & x,int & y){
    int temp = x;
    x = y;
    y = temp;
}


int main()
{
    int num1 = 111;
    int num2 = 222;
    cout << num1 << "    " << num2 << endl;
    swap1(num1,num2);
    cout << num1 << "    " << num2 << endl;
    swap2(&num1,&num2);
    cout << num1 << "    " << num2 << endl;
    int & ref1 = num1;
    int & ref2 = num2; 
    swap3(ref1,ref2);
    cout << num1 << "    " << num2 << endl;


    return 0;
}

