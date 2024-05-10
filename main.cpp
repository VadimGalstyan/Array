#include "array.h"



int main()
{
    Array a(4);
    
    std::cout<<a<<std::endl;
    std::cin>>a;
    a[1] = 0;
    std::cout<<a<<std::endl;


    return 0;
}