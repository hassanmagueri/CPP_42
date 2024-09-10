#include <iostream>

// using namespace std;

// print(char c)
// {
//     cout << c;
// }

char *print(void)
{
    char s[] = "abc";

    return s;
}

int main(int argc, char const *argv[])
{
    char *s = print();
    std::cout << s;
    return 0;
}
