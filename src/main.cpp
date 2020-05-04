#include <iostream>
#include "array.h"

int main() {
    Array test(10);
    test.set(2,50);
    test.set(9,10);
    test.set(0,14);

    std::cout << test.get(2) << std::endl;
    std::cout << test.getFirst() << std::endl;
    std::cout << test.getLast() << std::endl;
    std::cout << test.getSize() << std::endl;
    for(int x =0;x<test.getSize();x++)
        std::cout << test.get(x) << ",";
    std::cout << std::endl;

    test.resize(20);
    test.set(15,8);

    for(int x =0;x<test.getSize();x++)
        std::cout << test.get(x) << ",";
    std::cout << std::endl;

    test.dropData();
    for(int x =0;x<test.getSize();x++)
        std::cout << test.get(x) << ",";
    std::cout << std::endl;


    return 0;
}
