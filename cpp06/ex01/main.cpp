#include "./Serializer.hpp"

int main()
{
    Data *d = new Data();
    // d->num = 10;
    Serializer::serialize(d);
    return 0;
    
}
