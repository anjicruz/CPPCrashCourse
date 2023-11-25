#include <cstdio>
#include <iostream>
using namespace std;

struct student {
    int rollno;
    char sex;
};
int main() {
    student anil; // create a variable named anil
    student *anilptr; // create a pointer named *anilptr

    anilptr = &anil; // assign anilptr to the address &anil

    anil.rollno = 1234;
    anilptr->sex = 'm';

    cout << anilptr->rollno << " " << anil.sex << endl;
}