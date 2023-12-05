#include <cstdio>
#include <iostream>

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = &upper[0];

    *(lower + 3) = 'd';
    *(upper_ptr + 3) = 'D';

    char letter_d = *(lower + 4);
    char letter_D = *(upper_ptr + 4);

    printf("lower: %s\nupper %s", lower, upper);

    *(lower + 7) = 'g';
}/*Listing 3-7: An equivalent program to Listing 3-6 that uses pointer arithmetic
The lower array has length 6 (the letters a–e plus a null terminator).
It should now be clear why assigning lower[7] u is perilous. In this case,
you’re writing to some memory that doesn’t belong to lower. This can result
in access violations, program crashes, security vulnerabilities, and corrupted data. These kinds of errors can be very insidious, because the point at which bthe bad write occurs might be far removed from the point at which the bug manifests.*/