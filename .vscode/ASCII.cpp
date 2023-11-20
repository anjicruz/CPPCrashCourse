#include <cstdio>

int main() {
    char alphabet[27];
    for(int i=0; i < 26; i++) {
        alphabet[i] = i + 97;
    }
    alphabet[26] = 0;
    printf("%s\n", alphabet);
    for(int i=0; i < 26; i++) {
        alphabet[i] = i + 65;
    }
    printf("%s\n", alphabet);

}
/*First, you declare a char array of length 27 to hold the 26 English letter plus a null terminator u. Next, employ a for loop to iterate from 0
to 25 using the iterator i. The letter a has the value 97 in ASCII. By adding 97 to the iterator i, you can generate all the lowercase letters in the alphabet v. To make alphabet a null-terminated string, you set alphabet[26] to 0 w. You then print the result x.

Next, you print the uppercase alphabet. The letter A has the value 65 in
ASCII, so you reset each element of the alphabet accordingly y and invoke
printf again z.*/