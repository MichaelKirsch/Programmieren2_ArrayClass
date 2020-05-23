// template specialization
#include <iostream>
#include <vector>
#include "array.h"
#include "TemplatedArray.h"

int main()
{
    Array eins(10);
    eins.dropData();
    eins.set(1,10);
    Array zwei(10);
    zwei.dropData();
    zwei.set(1,10);
    Array drei = eins+zwei;
    drei+=zwei;
    drei++;
    std::cout << drei.get(1)<<std::endl;




}
