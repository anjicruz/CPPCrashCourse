#include <cstdio>
#include <iostream>
// Listing 3-4: A program illustrating array decay into a pointer
struct College {
    char name[256];
};
void print_name(College* college_ptr) {
    printf("%s College\n", college_ptr->name); /*always use -> for a pointer*/
}
int main() {
    College best_colleges[] = {"Mapua", "LaSalle", "STI"};
    print_name(best_colleges);
}