#include "mystl/List.h"
#include <iostream>

using namespace mystl;
int main(int argc,char* argv[]) {
    List<int> list;
    list.push_back(29);
    list.push_back(30);
    list.push_back(90);
    list.push_back(10000);
    list.push_back(92031);

    list.printlist();

    list.pop(2);
    std::cout << std::endl;
    list.printlist();
    std::cout << std::endl;
    std::cout << list[3] << " " << list[1] << " " << list[2];

    return 0;
}
