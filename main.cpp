#include <iostream>

int main()
{
    int iVariable = 10;
    float fVariable = 10.f;
    int pToInt =iVariable;
    float *pToFloat = &fVariable;

    float pResult = static_cast<float >(pToInt); // Will not work as the pointers are not related (they are of different types).
}
