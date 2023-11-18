#include <cstdio>
// This program uses each of the non-decimal integer representations
// (binary u, octal v, and hexadecimal w) and prints each with printf using
// the appropriate format specifier
int main() {
    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFF;
    printf("%llu\n", d);
}