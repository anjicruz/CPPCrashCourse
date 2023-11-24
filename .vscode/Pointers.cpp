#include <cstdio>
#include <iostream>

int main() {
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int *gettysburg_address = &gettysburg;
    printf("&gettysburg: %p\n", gettysburg_address);

    // std::cout << "gettysburg: " << gettysburg << std::endl;
    // std::cout << "gettysburg_address: " << &gettysburg << std::endl;
}

