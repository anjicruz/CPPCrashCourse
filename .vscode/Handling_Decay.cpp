#include <cstdio>
#include <iostream>

struct College {
    char name[256];
};

void print_names (College* colleges, size_t n_colleges) {
    for (size_t i = 0; i < n_colleges; i++) {
        printf("%s College\n", colleges[i].name);
    }
}

int main() {
    College oxford[] = { "Magdalen", "Nuffield", "Kellogg"};
    print_names(oxford, sizeof(oxford) / sizeof(College));
} /*The print_names function accepts an array in two arguments: a pointer to
the first College element u and the number of elements n_colleges . Within
print_names, you iterate with a for loop and an index i. The value of i iterates from 0 to n_colleges-1 .
You extract the corresponding college name by accessing the ith element
x and then get the name member y.*/