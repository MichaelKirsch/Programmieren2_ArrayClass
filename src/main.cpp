// template specialization
#include <iostream>
#include <vector>
#include "array.h"
#include "TemplatedArray.h"

int main()
{
    TemplatedArray<int,6> myArray;
    myArray.set(5,2);
    std::cout << myArray.get(2)<<std::endl;

    std::vector<int> test={1,2,3};

    TemplatedArray<std::vector<int>,6> myArrayOfArrays;
    myArrayOfArrays.set(test,0);
    for(auto& vectorspace:myArrayOfArrays.get(0))
        std::cout << vectorspace << std::endl;

    myArrayOfArrays.resize(10);
    myArrayOfArrays.set(test,9);
    for(auto& vectorspace:myArrayOfArrays.get(9))
        std::cout << vectorspace << std::endl;
}
