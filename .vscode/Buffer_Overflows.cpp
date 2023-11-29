#include <cstdio>
#include <iostream>

int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char *upper_ptr = upper;

    lower[3] = 'd';
    upper_ptr[3] = 'D';
    //std::cout << upper_ptr[3];
    char letter_d = lower[3];
    char letter_D = upper_ptr[3];

    printf("lower: %s\nupper: %s", lower, upper);
    
}