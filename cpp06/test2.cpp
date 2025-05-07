#include <iostream>
using namespace std;

int main() {
    int x = 0x123478;
    char* p = reinterpret_cast<char*>(&x);
    // p[0] = 8;
    // Print each byte of the int
    for (int i = 0; i < sizeof(int); ++i) {
        printf("Byte %d: %02x\n", i, static_cast<unsigned char>(p[i]));
    }
}
