#include <cstdio>
#include <iostream>
#include <string>

struct person {
    int age;
    std::string name;
};
int main() {
    person p1, p2;
    person *pptr = &p1; // assign the pointer to the address &p1

    p1.age = 99; // variable use the . operator   
    p1.name = "Jacob";

    (*pptr).age = 78;
    pptr->name = "Ji"; // pointer to a struct or class, use the -> operator

    std::cout << p1.name << " is " << p1.age << " years old." << std::endl;
}