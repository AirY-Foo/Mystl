#include "mystl/List.h"
#include <iostream>

using namespace mystl;
int main(int argc,char* argv[]) {
    //This is a Text
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
    std::cout << "Lenth:" << list.Lenth() << std::endl;
    for (int i = 0; i < list.Lenth(); i++) {
        std::cout << list[i] << std::endl;
    }

    List<std::string> str;
    str.push_back("Airy");
    str.push_back("Foo");
    str.push_back("good");
    str.printlist();

    return 0;
}
