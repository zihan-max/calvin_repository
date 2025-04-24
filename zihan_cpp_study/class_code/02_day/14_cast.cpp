#include <iostream>


using std::endl;
using std::cout;

void test(){

    void * vptr = malloc(sizeof(int));
    int *pInt = static_cast<int *>(vptr);

    
    free(vptr);
}
int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

