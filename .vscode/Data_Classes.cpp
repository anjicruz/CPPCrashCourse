#include <cstdio>
#include <iostream>
struct Book {
    char name[256];
    int year;
    int pages;
};
int main() {
    Book necromancer;
    necromancer.pages = 271;
    necromancer.year = 1271;
    printf("Necromancer has %d pages. ", necromancer.pages);
    printf("Necromancer was written on %d. ", necromancer.year);
}