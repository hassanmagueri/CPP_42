#include "./Serializer.hpp"
#include "./Data.hpp"

int main()
{
    Data data;
    data.n = 10;

    uintptr_t ptr = Serializer::serialize(&data);
    Data *newData = Serializer::deserialize(ptr);
    std::cout << "ptr " << ptr << std::endl;

    if (newData)
        std::cout << "newData=>n " << newData->n << std::endl;
    else
        std::cout << "NULL\n";
    return 0;
}
