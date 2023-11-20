#include <cstdio>

int main() {
    char house[] = "a "
         "house "
         "of "  "gold.";
    printf("A book holds %s\n ", house);
}
// Consecutive string literals get concatenated together, and any intervening whitespaces or newlines get ignored. So, you can place string literals on multiple lines in your source, and the compiler will treat them as one. Usually, such constructions are useful for readability only when you have a long string literal that would span multiple lines in your source code.
