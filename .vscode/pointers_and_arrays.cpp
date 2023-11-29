#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int luckyNumbers[5];
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;
    // cout << *(luckyNumbers + 2) << endl; // index 2
    for (int i = 0; i <= 4; i++) {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 4; i++) {
        cout << *(luckyNumbers + i) << " ";
    }
}


