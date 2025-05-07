#include <iostream>
using namespace std;

int main() {
    int a[] = {0,1,0};
    int *x = a;
    size_t A = reinterpret_cast<size_t>(x);
    // Print each byte of the int

//     for (int i = 0; i < sizeof(int); ++i) {
//         printf("Byte %d: %02x\n", i, static_cast<unsigned char>(p[i]));
//     }
  cout <<"A = "<<A<<endl;
  cout <<"A = "<<(unsigned long)(a)<<endl;
}

