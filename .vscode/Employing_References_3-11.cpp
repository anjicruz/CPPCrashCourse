#include <cstdio>
#include <iostream>

int main() {
    int original = 100;
    int& original_ref = original;
    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);

    int new_value = 200;
    original_ref = new_value;
    printf("Original: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}
/*Listing 3-11: A program illustrating that you cannot reseat references
This program initializes an int called original to 100. Then it declares a
reference to original called original_ref. From this point on, original_ref will always refer to original. This is illustrated by printing the value of original and the value referred to by original_ref. They’re the same.
Next, you initialize another int called new_value to 200 and assign original
to it . Read that carefully: this assignment w doesn’t reseat original_ref so that it points to new_value. Rather, it assigns the value of new_value to the object it points to (original).
The upshot is that all of these variables—original, original_ref, and
new_value—evaluate to 200 .
*/