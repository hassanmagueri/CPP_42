#include <exception>

template <typename T>
class Array
{
    private:
    
    T *arr;
    const unsigned int len;

    public:

    Array():len(0)
    {
        arr = new T;
    }

    ~Array()
    {
        delete[] arr;
    }

    Array(unsigned int n):len(n)
    {
        arr = new T[n];
    }

    Array(Array &other): len(other.len)
    {
        this->arr = new T[len];
        for (unsigned int i = 0; i < this->len; i++)
            this->arr[i] = other.arr[i];
    }

    Array &operator=(Array &other)
    {
        this->arr = new T[other.len];
        this->len = other.len;
        for (unsigned int i = 0; i < this->len; i++)
            this->arr[i] = other.arr[i];
    }

    T &operator[](size_t i)
    {
        if (i >= len) // no need to check less than 0 due size_t underflow when pass to it negative value
            throw std::runtime_error("index out of range");
        return arr[i];
    }

    unsigned int size() const
    {
        return len;
    }

};
