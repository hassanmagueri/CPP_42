#include "./Serializer.hpp"

int main()
{
    Data *data = NULL;
    // data->n = 10;
    uintptr_t ptr = Serializer::serialize(data);
    Data *newData = Serializer::deserialize(ptr);
    std::cout << "newData->n " << ptr << std::endl; 

    // std::cout << "newData->n " << newData->n << std::endl; 
    delete data;
    return 0;
}
