#include <iostream>
using namespace std;

void show(int x, float y) {
    cout << "Function 1";
}

void show(float x, int y) {
    cout << "Function 2";
}

int main() {
    show(10, 10);    // Ambiguous
}