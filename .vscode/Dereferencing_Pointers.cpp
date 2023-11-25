#include <cstdio>
#include <iostream>

int main() {
    int gettysburg{};
    int *gettysburg_address = &gettysburg;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    *gettysburg_address = 17352;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
}/* First, you initialize gettysburg to zero. Then, you initialize the pointer gettysburg_address to the address of gettysburg . Next, you print the int pointed to by gettysburg_address  and the value of gettysburg_address itself 
You write the value 17325 into the memory pointed to by gettysburg
_address  and then print the pointed-to value  and address  again.*/