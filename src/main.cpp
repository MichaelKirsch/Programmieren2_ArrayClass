// template specialization
#include <iostream>
#include <vector>
#include "array.h"
#include "TemplatedArray.h"

int main()
{
    Array mysimpleArray(12);
    Array myohtersimple(10,10);
    mysimpleArray.set(0,200);
    std::cout<<mysimpleArray<<std::endl;
    std::cout<<myohtersimple<<std::endl;
    ++mysimpleArray;
    std::cout << mysimpleArray<<std::endl;
    myohtersimple+mysimpleArray;
    std::cout<<myohtersimple<<std::endl;
    std::cout<< std::endl;
    mysimpleArray.resize(20);
    mysimpleArray.set(17,40);

    for(int x =0;x<mysimpleArray.getSize();x++)
        std::cout<< mysimpleArray.get(x) << ",";
    std::cout<< std::endl;
    mysimpleArray.dropData();
    for(int x =0;x<mysimpleArray.getSize();x++)
        std::cout<< mysimpleArray.get(x) << ",";
    std::cout<< std::endl;

    std::vector<int> test={1,2,3};

    TemplatedArray<std::vector<int>,6> myArrayOfArrays;
    myArrayOfArrays.set(test,0);




    for(auto& vectorspace:myArrayOfArrays.get(0))
        std::cout << vectorspace << std::endl;

    myArrayOfArrays.resize(10);
    TemplatedArray<Array,10> t;

    t.set(Array(4),3);

    Array g(11);
    for(int x =0;x<g.getSize()-1;x++)
        g.set(x,x);
    for(int x=0;x<t.getSize()-1;x++)
    {
        auto& l = t.get(x);
        l=g;
        for(int x =0;x<l.getSize()-1;x++)
            std::cout << l.get(x) ;
        std::cout << std::endl;
    }
    for(auto& vectorspace:myArrayOfArrays.get(9))
        std::cout << vectorspace << std::endl;
}
