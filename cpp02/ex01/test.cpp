#include <iostream>
#include <cmath>

const static int _fracBits = 8;

void printFloatBits(float num) {
    // Interpret the float as an unsigned 32-bit integer
    uint32_t intRepresentation;
    std::memcpy(&intRepresentation, &num, sizeof(intRepresentation));

    // Print the bits of the integer representation
    for (int i = 31; i >= 0; --i) {
        std::cout << ((intRepresentation >> i) & 1);
        // if (i == 31 - 0) std::cout << " "; // Space after each byte (8 bits)
        // if (i == 31 - 8) std::cout << " "; // Space after each byte (8 bits)
    }
    std::cout << "\n";
}

void printBits(int number) {
    std::bitset<32> bits(number); // 32 bits for an int
    std::cout << bits << std::endl;
}

float getDecimalDigits(float f)
{
    //without caring about sign
    uint32_t exPortion;
    std::memcpy(&exPortion, &f, sizeof(f));
    exPortion <<= 2; //to remove sign bit and the MSB of expPortion
    exPortion >>= 25;
    // printBits(++exPortion);
    std::cout << (exPortion) << std::endl;
    int M;
    std::memcpy(&M, &f, sizeof(f));
    printBits(M);
    uint8_t shiftBits = 8 + 1 + exPortion;
    // M = (pow() & M);
    M = (0b111111111111111111111 & M);
    printBits(M);
    f = 1.0 + M * 2;

    // std::cout << f << std::endl;
    return M;
}

int main()
{
    int fixedPoint = 0;
    // float f;
    // fixedPoint = 0 << 31; 
    // fixedPoint += 129 << 23;
    // fixedPoint += 7 << (23-3);
    // std::memcpy(&f, &fixedPoint, sizeof(fixedPoint));
    // std::cout << f << "\n"; // 7. 5

    float floatPoint = 7.3;
    printFloatBits(floatPoint);
    printBits(floatPoint * (1 << _fracBits));

    fixedPoint = floatPoint * (1 << _fracBits);
    printBits(fixedPoint);
    // printBits(floatPoint * (2 ^ _fracBits));
    std::cout << (1 << _fracBits) << std::endl;
    return 0;
}
