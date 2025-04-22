#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    int n = (rand() % 3);
    if (n == 0)
    cout << n;
    return 0;
}
