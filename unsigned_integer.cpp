#include <cstdio>

int main() {
    unsigned int a = 3669732608;
    printf("Yabba %x!\n", a);
    unsigned int b = 69;
    printf("There are %u,%o leaves here.\n", b, b);
}
// The hexadecimal representation of the decimal 3669732608 is dabbad00,
// which appears in the first line of output as a result of the hexadecimal
// format specifier %x u. The decimal 69 is 105 in octal. The format specifiers for unsigned integer %u v and octal integer %o w correspond with the arguments at x and y, respectively. The printf statement substitutes thesemquantities vw into the format string, yielding the message There are 69,105 leaves in here.