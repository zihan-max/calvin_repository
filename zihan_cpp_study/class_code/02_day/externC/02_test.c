#include <stdio.h>
// 在C语言中使用C++代码

extern void my_cpp_fun();
extern float a;// 注意,如果不说明类型，默认为int，（C99之前）
               // 建议加上数据类型的说明

int main(int argc,char *argv[]){
    
    my_cpp_fun();
    printf("hello =  %.2f\n",a);
    return 0;
}

